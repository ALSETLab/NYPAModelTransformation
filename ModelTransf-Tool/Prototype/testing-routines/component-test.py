#====================================================================================      
# Function: component-test
# Authors: marcelofcastro       
# Description: this function automatically generates the translation for every
# single-machine infinite-bus system that is available in the example folder.
#====================================================================================
# ----- Importing sys module:
import sys, os, time, shutil
# ----- Getting important directories for starting the testing procdure
scriptdir = os.getcwd() # initial dir, scripts dir
toolsdir = os.path.abspath(os.path.join(scriptdir, os.pardir)) # parent dir, model transf tools dir
homedir = os.path.abspath(os.path.join(toolsdir, os.pardir)) # parent parent dir, first dir out from tool
# ----- Adding paths for new modules:
srcdir = toolsdir + "/src" 
auxdir = toolsdir + "/fcn"
sys.path.insert(1, srcdir) # add src directory to tools path, for importing functions
sys.path.insert(2, auxdir) # add fcn directory to tools path, for importing functions
# ----- Importing functions:
import directory_functions
import psse2mo
# ----- Creating directory for storing results:
resultsdir = homedir + "/smib-results"
try:
	if os.path.exists(resultsdir):
		shutil.rmtree(resultsdir,ignore_errors=False,onerror=directory_functions.handleRemoveReadonly)
	os.mkdir(resultsdir)
except OSError:
	errmessage = "Creation of the directory %s failed. Fixing folder permitions and trying again." % resultsdir
	print(errmessage)
# ----- Adding path for single-machine infinite-bus (smib) systems to be tested:
smibdir = toolsdir + "/examples/smib/"
# ----- Defining parameters for translation and making systems to be simulation-ready:
encode_flag = 0 # determining the encoding reader (0 - utf8, 1 - latin1):
fault_flag = 1 # determining fault and Fault Info (0 - no fault, 1 - include fault):
faultinfo = [22,0.0,0.0,2.0,2.15] # [bus number, R, X, T_start, T_end]
# ----- Getting inside each of the directories within smib directory
# for each component type directory
for comptype in os.listdir(smibdir):
	# creating directory for component type:
	comptypedir = resultsdir + "/" + comptype
	try:
		if os.path.exists(comptypedir):
			shutil.rmtree(comptypedir,ignore_errors=False,onerror=directory_functions.handleRemoveReadonly)
		os.mkdir(comptypedir)
	except OSError:
		errmessage = "Creation of the directory %s failed. Fixing folder permitions and trying again." % resultsdir
		print(errmessage)
	# adding component type to path for search:
	compdir = smibdir + comptype
	# for each model directory inside component type directory 
	for model in os.listdir(compdir):
		modeldir = compdir + "/" + model
		# for each file inside model directory
		for file in os.listdir(modeldir):
			# find the raw file
			if file.endswith('.raw'):
				rawfile = modeldir + "/" + file
			# find the dyr file
			if file.endswith('.dyr'):
				dyrfile = modeldir + "/" + file
		# ----- Getting info from RAW:
		start_readraw = time.time() # initial time for raw.
		[system_base,system_frequency,sysdata,psse_version] = psse2mo.readRaw(rawfile,encode_flag) # parse and format rawfile for sysdata
		time_readraw = time.time() - start_readraw # time for raw.
		# ----- Getting info from DYR:
		start_readdyr = time.time() # initial time for dyr.
		dyrdata = psse2mo.readDyr(dyrfile) # parse info from dyrfile
		time_readdyr = time.time() - start_readdyr # time for dyr.
		# ----- Creating directory for translation:
		translationdir = comptypedir + "/" + model
		try:
			if os.path.exists(translationdir):
				shutil.rmtree(translationdir,ignore_errors=False,onerror=directory_functions.handleRemoveReadonly)
			os.mkdir(translationdir)
		except OSError:
			errmessage = "Creation of the directory %s failed. Trying again." % resultsdir
			print(errmessage)
		[wdir,sdir,ddir,gdir] = directory_functions.createDir(translationdir) # creates folders for placement of results  
		# ----- Writing translation:
		start_trans = time.time() # initial time.
		psse2mo.writeMo(wdir,sdir,ddir,gdir,system_base,system_frequency,sysdata,dyrdata,fault_flag,faultinfo) # writes models
		time_trans = time.time()- start_trans # calculate execution time
		# ----- Updating parameters and writing log:
		total_time = time_trans + time_readraw + time_readdyr
		times = [time_readraw,time_readdyr,time_trans,total_time]
		psse2mo.writeLog(wdir,system_base,system_frequency,psse_version,sysdata,dyrdata,times,fault_flag,faultinfo) 