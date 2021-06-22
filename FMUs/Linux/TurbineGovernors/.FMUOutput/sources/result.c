#if defined(STORE_RESULT)
/* Implementation of result.h */

#include "result.h"
#include "types.h"
#include "util.h"

#include <assert.h>

#ifdef _MSC_VER
#define snprintf _snprintf
#endif

/* ----------------- macros ----------------- */

/* modelexchange minimal sampling as a thenth of choosen sampling time */
#define SAMPLE_RATE_ME_SCALE 1e1

/* TODO: fetch STORE_RESULT_STOP_TIME from dsmodel.c instead */
/* set small since plot is not normalized if actual simulation time is smaller */
#define STORE_RESULT_STOP_TIME 1e-9

/* use result buffer */
#define RESULT_BUFFER

/* initial and maximal value buffer size */
/* For FMI 1 there is no way for the invironment to signal "flush",
   so use smaller buffers to avoid using a lot of heap */
#ifdef FMI_2
#define BUF_CHUNK_SIZE 64
#define BUF_MAX_SIZE (6 * BUF_CHUNK_SIZE)
#else
#define BUF_CHUNK_SIZE 2
#define BUF_MAX_SIZE (2 * BUF_CHUNK_SIZE)
#endif /* FMI_2 */

#define BUF_START_SIZE BUF_CHUNK_SIZE

#define ASSERT_MAX_BUF() assert(result->curBufSize == BUF_MAX_SIZE)

/* handle circular buffer */
#define ADJUST_UNDER(ix)      \
	if (ix < 0) {             \
        ASSERT_MAX_BUF();     \
		ix += BUF_MAX_SIZE;   \
	}

#define ADJUST_OVER(ix)       \
	if (ix >= BUF_MAX_SIZE) { \
        ASSERT_MAX_BUF();     \
		ix -= BUF_MAX_SIZE;   \
	}

#define MOD(x) ((x) % BUF_MAX_SIZE)

/* sample point is too close to previous */
#define TOO_DENSE() ((SAMPLE_RATE_ME_SCALE * (comp->time - result->lastSampleTime) < comp->dstruct->mStoreResultInterval) && (force == FMIFalse))


#define LABEL "Result generation:"

/* ----------------- local function declarations ----------------- */

/* Allocates contents in another buffer chunk */
static int allocate_chunk_content(Component* comp);

/* Frees content in a buffer chunk, but not the chunk itself */
static void free_chunk_content(Component* comp);

/* Adds sample to buffer. Necessary allocations must be done beforehand. */
static void sample(Component* comp);

/* Flushes the oldest buffer chunk */
static void flush_oldest_chunk();

/* ----------------- local variables ----------------- */

#define GenerateResultInNonDymosim 1
#include "GenerateResultInNonDymosim.c"

const static struct DeclarePhase zeroPhase = { 0 };

/* ----------------- function definitions ----------------- */

void result_setup(Component* comp)
{
	char filePathBuf[256] = {0};
	char* filePathBufPtr = NULL;
	int n = 0;
	char* fileName = NULL;
	size_t sLen = 0, index = 0;
	const char* suffix="_internal";
	size_t suffixSize = 10;
	int sAlloc = 0;
	static int cnt=0;
	int counter = 0;
#ifdef FMI_2
	FMICallbackAllocateMemory allocMem = comp->functions->allocateMemory;
	FMICallbackFreeMemory freeMem = comp->functions->freeMemory;
#else
	FMICallbackAllocateMemory allocMem = comp->functions.allocateMemory;
	FMICallbackFreeMemory freeMem = comp->functions.freeMemory;
#endif
	Result* result;

	counter=++cnt; /* For multiple instances */
	assert(comp->storeResult == FMITrue);

	util_logger(comp, comp->instanceName, FMIOK, "", "Setting up result generation");

	comp->result = (Result*) allocMem(1, sizeof(Result));
	if (comp->result == NULL) {
		goto fail;
	}
	result = comp->result;

#ifdef RESULT_BUFFER
	{
		int i;
		ResultValues** buf;

		/* allocate all placeholders but only one chunk of actual content to start with*/
		result->buf = (ResultValues**) allocMem(BUF_MAX_SIZE, sizeof(ResultValues*));
		if (result->buf == NULL) {
			goto fail;
		}
		buf = result->buf;
		result->curBufSize = 0;
		/* separare loop for NULL to simplify teardown upon memory allocation failure */
		for (i = BUF_START_SIZE; i < BUF_MAX_SIZE; i++) {
			buf[i] = NULL;
		}
		for (i = 0; i < BUF_MAX_SIZE; i++) {
			buf[i] = (ResultValues*) allocMem(1, sizeof(ResultValues));

			if (buf[i] == NULL) {
				goto fail;
			}
		}

		if (!allocate_chunk_content(comp)) {
			goto fail;
		}

		result->curStartIx = result->curIx = result->nUsed = 0;
		result->flushWarned = FMIFalse;
	}
#else
	result->buf = NULL;
#endif /* RESULT_BUFFER */

	result->phase = zeroPhase;
	DeclarePhase0(NULL);
	DeclarePhase1(&result->phase);
	result->phase.filePath = NULL;

	/* name of result file according to instance name, default to "dres" */
	sLen = strlen(comp->instanceName);
	if(sLen == 0){
		fileName = "dres_internal";
	}else{
		fileName = (char*) allocMem(1, sLen+suffixSize);
		if (fileName == NULL) {
			goto fail;
		}
		sAlloc=1;
		memcpy(fileName,comp->instanceName,sLen+1);
		memcpy(&fileName[sLen],suffix,suffixSize);
		for(index = 0; index <= sLen; ++index){
			switch (fileName[index]){
			case '.':
			case ':':
			case ',':
			case ';':
			case '[':
			case ']':
			case ' ':
			case '(':
			case ')':
			case '/':
			case '\\':
			case '|':
			case '*':
			case '=':
			case '>':
			case '<':
			case '?':
			case '"':
				fileName[index] = '_';
				break;
			}
		}
	}
	if (comp->did && counter!=1) {
		/* For multiple instances; we cannot guarantee that the file names are unique */
		/* Should have some logic to be able to disable this and assume that instance names are really unique */
		n = snprintf(filePathBuf, sizeof(filePathBuf), "%s%d.mat", fileName, counter);
	} else {
		n = snprintf(filePathBuf, sizeof(filePathBuf), "%s.mat", fileName);
	}
	if (n < 0 || n == sizeof(filePathBuf)) {
		goto fail;
	}
	
	/* Fixing IR-236202: Replace all '/' in filepath with '_'	*/
	filePathBufPtr = filePathBuf;
    while ((filePathBufPtr = strchr (filePathBufPtr, '/')) != NULL) {
        *filePathBufPtr++ = '_';
	}
#ifdef FMI_2
	if ((result->phase.filePath = util_strdup(comp->functions, filePathBuf)) == NULL) {
#else
	if ((result->phase.filePath = util_strdup(&comp->functions, filePathBuf)) == NULL) {
#endif
		goto fail;
	}

	DeclarePhase3(&result->phase, comp->time, STORE_RESULT_STOP_TIME, comp->parameters,
		comp->states, comp->derivatives, comp->outputs, comp->inputs,
		comp->auxiliary);
	result->lastSampleTime = result->lastFileSampleTime = result->lastWarnTime = -1;
	result->resultSampleCounter = 0;
	comp->nextResultSampleTime = comp->time;
	/* initial sample point */
	result_sample(comp, FMIFalse);
	if(sAlloc){
		freeMem(fileName);
		fileName=NULL;
	}
	return;

fail:
	util_logger(comp, comp->instanceName, FMIWarning, "", "Failed to setup result generation, skipping it");
	result_teardown(comp);
	comp->storeResult = FMIFalse;
}

/* ------------------------------------------------------ */
void result_teardown(Component* comp)
{
	Result* result = comp->result;
#ifdef FMI_2
	FMICallbackFreeMemory freeMem = comp->functions->freeMemory;
#else
	FMICallbackFreeMemory freeMem = comp->functions.freeMemory;
#endif

	assert(comp->storeResult == FMITrue);
	if (result == NULL) {
		return;
	}

	/* enusure end time is sampled */
	if (result->lastSampleTime < comp->time) {
		/* fake to avoid being cosidered to dense */
		result->lastSampleTime = -1;
		result_sample(comp, FMIFalse);
	}

	/* flush any buffered values */
	result_flush(comp);

	DeclarePhase9(&result->phase);
	freeMem((void*) result->phase.filePath);

#ifdef RESULT_BUFFER
	{
		int i;
		for (i = 0; i < result->curBufSize; i++) {
			ResultValues* vals = result->buf[i];

			freeMem(vals->parameters);
			freeMem(vals->states);
			freeMem(vals->derivatives);
			freeMem(vals->outputs);
			freeMem(vals->inputs);
			freeMem(vals->auxiliary);
			freeMem(vals);
		}

		/* free any placeholders not yet freed */
		for (i = result->curBufSize; i < BUF_MAX_SIZE; i++) {
			freeMem(result->buf[i]);
		}
	}

	freeMem(result->buf);

#endif /* RESULT_BUFFER */

	freeMem(result);
}

/* ------------------------------------------------------ */
void result_sample(Component* comp, FMIBoolean force)
{
	Result* result = comp->result;

	assert(comp->storeResult == FMITrue);

	/* avoid duplicate values */
	if ((comp->time < result->lastFileSampleTime) || (comp->time == result->lastFileSampleTime && (force == FMIFalse))) {
		if (result->lastWarnTime < result->lastFileSampleTime) {
			util_logger(comp, comp->instanceName, FMIWarning, "",
				"%s: duplicate sample point at t = %.4f (and others at t < %f) neglected.",
				LABEL, comp->time, result->lastFileSampleTime, result->lastWarnTime);
			result->lastWarnTime = result->lastFileSampleTime;
		}
		return;
	}

#ifdef RESULT_BUFFER
	/* must buffer until values confirmed */
	{
		int ix = result->curIx;
		int startIx = result->curStartIx;
		assert(ix <= result->curBufSize);
		assert(startIx <= result->curBufSize);

		if (comp->time < result->lastSampleTime) {
			/* replace buffered values */
			/* find index for given time */
			ResultValues** valsp = result->buf;
			int i = ix - 2;
			int j = i;

			result->nUsed--;
			if (ix < result->curStartIx) {
				ASSERT_MAX_BUF();
				j += BUF_MAX_SIZE;
			}

			ADJUST_UNDER(i);
			assert(result->lastSampleTime = valsp[MOD(i + 1)]->time);
			while (j >= startIx && comp->time < valsp[i]->time) {
				--j;
				--i;
				ADJUST_UNDER(i);
				result->nUsed--;
			}
			result->lastSampleTime = (j >= startIx) ? valsp[i]->time : -1;
			result->curIx = i + 1;
			ADJUST_OVER(result->curIx);
			ix = result->curIx;
		}
		if(comp->isCoSim ){
			if(comp->time >= comp->nextResultSampleTime){
				++result->resultSampleCounter;
				comp->nextResultSampleTime = result->resultSampleCounter*comp->dstruct->mStoreResultInterval;
			}else if(FMIFalse == force){
				return;
			}
		}else if (TOO_DENSE()) {
			return;
		}
		assert(result->nUsed <= result->curBufSize);
		if (result->nUsed == result->curBufSize) {
			/* buffer full */
			assert(result->nUsed <= BUF_MAX_SIZE);
			if (result->nUsed == BUF_MAX_SIZE) {
				/* maxmimum buffer size reached */
				/* do not warn for ME FMI 2.0 since there is now way for the environemnt to request a flush anyway */
				if (comp->result->flushWarned == FMIFalse && comp->isCoSim == FMITrue) {
					int lastIx = MOD(result->curStartIx + BUF_CHUNK_SIZE - 1);
					util_logger(comp, comp->instanceName, FMIWarning, "",
						"%s: buffer full at t = %.4f, forcing file output for interval t = %.4f ... %.4f." 
						" To avoid this for FMI 2, set SetFMUStatePriorToCurrentPoint = fmiTrue in fmiDoStep. Will not warn about this again.",
						LABEL, comp->time, result->buf[result->curStartIx]->time, result->buf[lastIx]->time);
					result->flushWarned = FMITrue;
				}
				flush_oldest_chunk(comp);
			} else {
				/* allocate another chunk */
				if (!allocate_chunk_content(comp)) {
					util_logger(comp, comp->instanceName, FMIWarning, "",
						"%s: buffer extension failed at t = %.4f, forcing file output for interval t = %.4f ... %.4f",
						LABEL, comp->time, result->buf[0]->time, result->buf[ix - 1]->time);
					flush_oldest_chunk(comp);
				}
			}
		} 

		sample(comp);
	}
#else
	/* directly on file */
	if(comp->isCoSim ){
		if(comp->time >= comp->nextResultSampleTime){
			++result->resultSampleCounter;
			comp->nextResultSampleTime = result->resultSampleCounter*comp->dstruct->mStoreResultInterval;
			assert(comp->nextResultSampleTime > comp->time);
		}else if(FMIFalse == force){
			return;
		}
	}else if (TOO_DENSE()) {
		return;
	}
	DeclarePhase7(&result->phase, comp->time, STORE_RESULT_STOP_TIME, comp->parameters,
		comp->states, comp->derivatives, comp->outputs, comp->inputs,
		comp->auxiliary);
	result->lastSampleTime = result->lastFileSampleTime = comp->time;
#endif /* RESULT_BUFFER */
}

/* ------------------------------------------------------ */
void result_flush(Component* comp)
{
	Result* result = comp->result;
	int i;

	if (result->nUsed == 0) {
		return;
	}

	i = result->curStartIx;
	while (i != result->curIx) {
		ResultValues* vals = result->buf[i];
		DeclarePhase7(&result->phase, vals->time, STORE_RESULT_STOP_TIME, vals->parameters,
			vals->states, vals->derivatives, vals->outputs, vals->inputs,
			vals->auxiliary);
		++i;
		ADJUST_OVER(i);
	}
	assert(i >= 0);
	--i;
	ADJUST_UNDER(i);
	result->lastFileSampleTime = result->buf[i]->time;
	result->curIx = result->curStartIx = 0;
	result->nUsed = 0;
}

/* ----------------- local function definitions ----------------- */

static int allocate_chunk_content(Component* comp)
{
	Result* result = comp->result;
#ifdef FMI_2
	FMICallbackAllocateMemory allocMem = comp->functions->allocateMemory;
#else
	FMICallbackAllocateMemory allocMem = comp->functions.allocateMemory;
#endif
	int endIx = result->curIx + BUF_CHUNK_SIZE;
	int i;

	assert(result->curBufSize < BUF_MAX_SIZE);
	assert(endIx <= BUF_MAX_SIZE);
	assert(result->curStartIx == 0);

	for (i = result->curIx; i < endIx; i++) {
		ResultValues* vals = result->buf[i];
		vals->parameters = vals->states = vals->derivatives = vals->outputs = vals->inputs = vals->auxiliary = NULL;

		/* increment gradually to handle memory allocation failure */ 
		comp->result->curBufSize++;	

		vals->parameters = (FMIReal*) allocMem(comp->nPar, sizeof(FMIReal));
		vals->states = (FMIReal*) allocMem(comp->nStates, sizeof(FMIReal));
		vals->derivatives = (FMIReal*) allocMem(comp->nStates, sizeof(FMIReal));
		vals->outputs = (FMIReal*) allocMem(comp->nOut, sizeof(FMIReal));
		vals->inputs = (FMIReal*) allocMem(comp->nIn, sizeof(FMIReal));
		vals->auxiliary = (FMIReal*) allocMem(comp->nAux, sizeof(FMIReal));

		if (vals->parameters == NULL ||  vals->states == NULL || vals->derivatives == NULL || vals->outputs == NULL ||
			vals->inputs == NULL || vals->auxiliary == NULL) {
				free_chunk_content(comp);
				comp->result->curBufSize = result->curIx;	
				return 0;
		}
	}

	return 1;
}

/* ------------------------------------------------------ */
static void free_chunk_content(Component* comp)
{
	Result* result = comp->result;
#ifdef FMI_2
	FMICallbackFreeMemory freeMem = comp->functions->freeMemory;
#else
	FMICallbackFreeMemory freeMem = comp->functions.freeMemory;
#endif
	int i;

	for (i = result->curIx; i < result->curBufSize; i++) {
		ResultValues* vals = result->buf[i];

		freeMem(vals->parameters);
		freeMem(vals->states);
		freeMem(vals->derivatives);
		freeMem(vals->outputs);
		freeMem(vals->inputs);
		freeMem(vals->auxiliary);
	}
}

/* ------------------------------------------------------ */
static void sample(Component* comp)
{
	Result* result = comp->result;
	ResultValues* vals = result->buf[result->curIx];

	vals->time = comp->time;
	memcpy(vals->parameters, comp->parameters, comp->nPar * sizeof(FMIReal));
	memcpy(vals->states, comp->states, comp->nStates * sizeof(FMIReal));
	memcpy(vals->derivatives, comp->derivatives, comp->nStates * sizeof(FMIReal));
	memcpy(vals->outputs, comp->outputs, comp->nOut * sizeof(FMIReal));
	memcpy(vals->inputs, comp->inputs, comp->nIn * sizeof(FMIReal));
	memcpy(vals->auxiliary, comp->auxiliary, comp->nAux * sizeof(FMIReal));

	result->lastSampleTime = comp->time;
	result->curIx++;
	ADJUST_OVER(result->curIx);
	result->nUsed++;
}

/* ------------------------------------------------------ */
static void flush_oldest_chunk(Component* comp)
{
	Result* result = comp->result;
	int i;
	int endIx;

	ASSERT_MAX_BUF();
	assert(result->nUsed == BUF_MAX_SIZE);

	i = result->curStartIx;
	endIx = result->curStartIx + BUF_CHUNK_SIZE;
	/* startIx should only point to start of buffer chunks */
	assert(endIx <= BUF_MAX_SIZE);

	while (i < endIx) {
		ResultValues* vals = result->buf[i];
		DeclarePhase7(&result->phase, vals->time, STORE_RESULT_STOP_TIME, vals->parameters,
			vals->states, vals->derivatives, vals->outputs, vals->inputs,
			vals->auxiliary);
		++i;
	}
	result->lastFileSampleTime = result->buf[endIx-1]->time;
	result->curStartIx = MOD(endIx);
	result->nUsed -= BUF_CHUNK_SIZE;
}
#endif
