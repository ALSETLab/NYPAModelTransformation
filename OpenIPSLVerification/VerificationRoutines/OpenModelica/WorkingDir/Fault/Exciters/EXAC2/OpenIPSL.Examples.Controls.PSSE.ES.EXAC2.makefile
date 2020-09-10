# Makefile generated by OpenModelica
# Platform: linux64

# Simulations use -O3 by default
CC=clang
CXX=clang++
LINK=clang -shared
EXEEXT=
DLLEXT=.so
CFLAGS_BASED_ON_INIT_FILE=
DEBUG_FLAGS=-Os
CFLAGS=$(CFLAGS_BASED_ON_INIT_FILE) $(DEBUG_FLAGS) -fPIC -mfpmath=sse -fno-dollars-in-identifiers ${MODELICAUSERCFLAGS}   
CPPFLAGS= -I"/usr/bin/../include/omc/c" -I. -DOPENMODELICA_XML_FROM_FILE_AT_RUNTIME -DOMC_MODEL_PREFIX=OpenIPSL_Examples_Controls_PSSE_ES_EXAC2 -DOMC_NUM_MIXED_SYSTEMS=0 -DOMC_NUM_LINEAR_SYSTEMS=0 -DOMC_NUM_NONLINEAR_SYSTEMS=5 -DOMC_NDELAY_EXPRESSIONS=0 -DOMC_NVAR_STRING=0
LDFLAGS=-L"/usr/bin/../lib/x86_64-linux-gnu/omc" -L"/usr/bin/../lib" -Wl,-rpath,"/usr/bin/../lib/x86_64-linux-gnu/omc" -Wl,-rpath,"/usr/bin/../lib"     -Wl,--no-as-needed -Wl,--disable-new-dtags -lSimulationRuntimeC -llapack -lblas -lm -lm -lomcgc -lpthread -rdynamic -Wl,--no-undefined 
DIREXTRA=-L"/home/manuelnvro/dev/Gitted/NYPAModelTransformation/OpenIPSLVerification/VerificationRoutines/OpenModelica/OpenIPSL/OpenIPSL/Examples/Controls/PSSE/ES"
MAINFILE=OpenIPSL.Examples.Controls.PSSE.ES.EXAC2.c
MAINOBJ=OpenIPSL.Examples.Controls.PSSE.ES.EXAC2.o
CFILES=OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_functions.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_records.c \
OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_01exo.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_02nls.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_03lsy.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_04set.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_05evt.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_06inz.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_07dly.c \
OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_08bnd.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_09alg.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_10asr.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_11mix.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_12jac.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_13opt.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_14lnz.c \
OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_15syn.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_16dae.c OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_17inl.c 

OFILES=$(CFILES:.c=.o)
GENERATEDFILES=$(MAINFILE) OpenIPSL.Examples.Controls.PSSE.ES.EXAC2.makefile OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_literals.h OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_functions.h $(CFILES)

.PHONY: omc_main_target clean bundle

# This is to make sure that OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_*.c are always compiled.
.PHONY: $(CFILES)

omc_main_target: $(MAINOBJ) OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_functions.h OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_literals.h $(OFILES)
	$(CC) -I. -o OpenIPSL.Examples.Controls.PSSE.ES.EXAC2$(EXEEXT) $(MAINOBJ) $(OFILES) $(CPPFLAGS) $(DIREXTRA)   $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
clean:
	@rm -f OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_records.o $(MAINOBJ)

bundle:
	@tar -cvf OpenIPSL.Examples.Controls.PSSE.ES.EXAC2_Files.tar $(GENERATEDFILES)