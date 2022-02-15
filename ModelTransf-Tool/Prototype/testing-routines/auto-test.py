#====================================================================================      
# Function: auto-test
# Authors: marcelofcastro       
# Description: this function automatically translates the available power networks 
# examples and measures the translation time in order to provide data for performance
# and other types of posterior analyses.
#====================================================================================
# ----- Importing sys module:
import sys, os, time, shutil, datetime 
# ----- Importing numpy for calculations:
import numpy as np
# ----- Getting important directories for starting the testing procdure
scriptdir = os.getcwd() # initial dir, scripts dir
toolsdir = os.path.abspath(os.path.join(scriptdir, os.pardir)) # parent dir, model transf tools dir
homedir = os.path.abspath(os.path.join(toolsdir, os.pardir)) # parent parent dir, first dir out from tool
# ----- Creating directory for storing results:
resultsdir = homedir + "/performance-results"
try:
	if os.path.exists(resultsdir):
		shutil.rmtree(resultsdir)
	os.mkdir(resultsdir)
except OSError:
	errmessage = "Creation of the directory %s failed" % resultsdir
	print(errmessage)
# ----- Adding paths for new modules:
srcdir = toolsdir + "/src" 
auxdir = toolsdir + "/fcn"
sys.path.insert(1, srcdir) # add src directory to tools path, for importing functions
sys.path.insert(2, auxdir) # add fcn directory to tools path, for importing functions
# ----- Importing functions:
import directory_functions
import psse2mo
# ----- Defining parameters for translation and making systems to be simulation-ready:
numberoftests = 20 # define the number of translation to be performed in each model.
encode_flag = 1 # determining the encoding reader (0 - utf8, 1 - latin1):
fault_flag = 1 # determining fault and Fault Info (0 - no fault, 1 - include fault):
faultinfo = [22,0.0,0.0,2.0,2.15] # [bus number, R, X, T_start, T_end]
# ----- Adding path for example systems to be tested:
exdir = toolsdir + "/examples/"
# ----- Getting inside each of the directories within examples
# Create variables that will store information for printing a report:
mean_info = [] # mean array
std_info = [] # std array
names = [] # names for systems
# for each example system
for examplesys in os.listdir(exdir):
	# if example sys is not smib - systems for component testing and 
	if examplesys != 'smib':
		# create directory for storing results of specific test system:
		exsysdir = resultsdir + "/" + examplesys
		try:
			if os.path.exists(exsysdir):
				shutil.rmtree(exsysdir)
			os.mkdir(exsysdir)
		except OSError:
			errmessage = "Creation of the directory %s failed" % exsysdir
			print(errmessage)
		# adding component type to path for search:
		networkdir = exdir + examplesys
		# for each model directory inside component type directory 
		for file in os.listdir(networkdir):
			# find a raw file
			if file.endswith('.raw'):
				rawfile = networkdir + "/" + file
			# find a dyr file
			if file.endswith('.dyr'):
				dyrfile = networkdir + "/" + file
		# initialize arrays of variables:
		time_experiment = []
		# do numberoftests times each translation for performance analysis
		for i in range(0,numberoftests):
			# ----- Getting info from RAW:
			start_readraw = time.time() # initial time for raw.
			[system_base,system_frequency,sysdata,psse_version] = psse2mo.readRaw(rawfile,encode_flag) # parse and format rawfile for sysdata
			time_readraw = time.time() - start_readraw # time for raw.
			# ----- Getting info from DYR:
			start_readdyr = time.time() # initial time for dyr.
			dyrdata = psse2mo.readDyr(dyrfile) # parse info from dyrfile
			time_readdyr = time.time() - start_readdyr # time for dyr.
			# ----- Creating directory for translation:
			translationdir = exsysdir
			[wdir,sdir,ddir,gdir] = directory_functions.createDir(translationdir) # creates folders for placement of results  
			# ----- Writing translation:
			start_trans = time.time() # initial time.
			psse2mo.writeMo(wdir,sdir,ddir,gdir,system_base,system_frequency,sysdata,dyrdata,fault_flag,faultinfo) # writes models
			time_trans = time.time()- start_trans # calculate execution time
			# ----- Updating parameters and writing log:
			total_time = time_trans + time_readraw + time_readdyr
			times = [time_readraw,time_readdyr,time_trans,total_time]
			psse2mo.writeLog(wdir,system_base,system_frequency,psse_version,sysdata,dyrdata,times,fault_flag,faultinfo)
			# ----- Store times:
			time_experiment.append(times)
		# ----- Calculate variables for statistical analysis:		
		timearray = np.asarray(time_experiment) # transform list into an array
		meantime = timearray.mean(axis=0) # mean for the different times: reading, writing...
		stdtime = timearray.std(axis=0) # std for the different times: reading, writing...
		# ----- Store variables
		names.append(examplesys)
		mean_info.append(meantime.tolist())
		std_info.append(stdtime.tolist())
# ----- Printing final result:
reportname = "performance-log.txt" # output log name
# ----- Changing directory to results directory
os.chdir(resultsdir)
# ----- Creating log file:
logfile = open(reportname,"w+")
# ----- Writing basic information:
logfile.write("Performance analysis of translation tool\n")
unix_time = time.time() # time right now in unix timestamp
now_time = datetime.datetime.fromtimestamp(unix_time) # converting time to date
logfile.write("(Test performed at: %s)\n\n\n" % (str(now_time))) # printing info in log
logfile.write("Number of translations executed for each system: %.0f\n\n\n" % numberoftests) # number of tests performed
# ----- Writing information about each system translated:
for i in range(len(names)):
	logfile.write("System Translated: %s \n" % str(names[i]))
	logfile.write("   Time spent with \n") 
	logfile.write("                    reading RAW: %.5f \u00B1 %.5f second(s)\n" % (float(mean_info[i][0]),float(std_info[i][0]))) 
	logfile.write("                    reading DYR: %.5f \u00B1 %.5f second(s)\n" % (float(mean_info[i][1]),float(std_info[i][1]))) 
	logfile.write("                    writing .MO: %.5f \u00B1 %.5f second(s)\n" % (float(mean_info[i][2]),float(std_info[i][2]))) 
	logfile.write("                    translation: %.5f \u00B1 %.5f second(s)\n\n\n" % (float(mean_info[i][3]),float(std_info[i][3]))) 
# ----- Closing file:
logfile.close()
