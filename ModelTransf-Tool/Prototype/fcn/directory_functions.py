#====================================================================================              
# Description: Definition of functions to create, select and change directories or 
# files. 
#====================================================================================
# ----- Init. libraries:
import os # importing operational system
import shutil	# importing library to overwrite folders
import tkinter.filedialog as tkFileDialog # functions for asking for dirs and files
import tkinter.messagebox as tkMessageBox # functions for meassage box
#====================================================================================      
# Function: askDir
# Authors: marcelofcastro and ManuelNvro          
# Description: this function ask for directories.
#====================================================================================
def askDir():
	"""
	Asks the user for a directory using tk library.

	Might be obsolete in this application.

	Usage: ``path = directory_function.askDir()``
	"""
	userpath = tkFileDialog.askdirectory()
	return userpath
#====================================================================================      
# Function: askRaw
# Authors: marcelofcastro and ManuelNvro          
# Description: this function ask for raw files.
#====================================================================================
def askRawfile():
	"""
	Function that asks user for RAW files.

	Used to get the path of a file with .raw extenstion.

	Usage: ``rawfile = directory_function.askRawfile()``
	"""
	rawfile = tkFileDialog.askopenfilename(filetypes=[("Raw files", ".raw")])
	return rawfile
#====================================================================================      
# Function: askDyr
# Authors: marcelofcastro and ManuelNvro          
# Description: this function ask for dyr files.
#====================================================================================
def askDyrfile(): 
	"""
	Function that asks user for DYR (dynamic RAW) files.

	Used to get the path of a file with .dyr extenstion.

	Usage: ``dyrfile = directory_function.askDyrfile()``
	"""
	dyrfile = tkFileDialog.askopenfilename(filetypes=[("Dyr files", ".dyr")])
	return dyrfile
#====================================================================================      
# Function: createDir
# Authors: ManuelNvro          
# Description: this function creates the folder and subfolders for model translation
#====================================================================================
def createDir(userpath):
	"""
	Function that creates the nested folder structure used when writing the Modelica package.
	The nested folder structure created with this function is only used when an entire system is translated from PSSE.

	This function takes userpath, the translation destination directory selected by the user, as input.
	It returns folder's paths that are populated with models by other auxiliary functions.

	Usage: ``[main_work_dir,translated_sys_dir,sys_data_dir,sys_generator_dir] = createDir(userpath)``
	"""
	# ----- Getting paths and naming directories:
	workingdirectory = userpath + "/Translation" # name of main folder
	systemdirectory = userpath + "/Translation/System" # name of test system folder
	sysdatadirectory = userpath + "/Translation/System/PF_Data" # name of data folder
	bdatadirectory = userpath + "/Translation/System/PF_Data/Bus_Data" # name of bus data folder
	ldatadirectory = userpath + "/Translation/System/PF_Data/Loads_Data" # name of load data folder
	mdatadirectory = userpath + "/Translation/System/PF_Data/Machines_Data" # name of machines data folder
	tdatadirectory = userpath + "/Translation/System/PF_Data/Trafos_Data" # name of trafos data folder
	sysgensdirectory = userpath + "/Translation/System/Generators" # name of plant data folder
	# ----- Creation of working directory called Translation:
	try:
		if os.path.exists(workingdirectory):
			shutil.rmtree(workingdirectory)
		os.mkdir(workingdirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % workingdirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# ----- Creation of package directory:
	try:
		if os.path.exists(systemdirectory):
			shutil.rmtree(systemdirectory)
		os.mkdir(systemdirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % systemdirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# ----- Creation of systems data directory:
	# Main folder:
	try:
		if os.path.exists(sysdatadirectory):
			shutil.rmtree(sysdatadirectory)
		os.mkdir(sysdatadirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % sysdatadirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# Bus Data folder:
	try:
		if os.path.exists(bdatadirectory):
			shutil.rmtree(bdatadirectory)
		os.mkdir(bdatadirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % bdatadirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# Load Data folder:
	try:
		if os.path.exists(ldatadirectory):
			shutil.rmtree(ldatadirectory)
		os.mkdir(ldatadirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % ldatadirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# Machines Data folder:
	try:
		if os.path.exists(mdatadirectory):
			shutil.rmtree(mdatadirectory)
		os.mkdir(mdatadirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % mdatadirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# Transformer Data folder:
	try:
		if os.path.exists(tdatadirectory):
			shutil.rmtree(tdatadirectory)
		os.mkdir(tdatadirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % tdatadirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	# ----- Creation of systems generators directory:
	try:
		if os.path.exists(sysgensdirectory):
			shutil.rmtree(sysgensdirectory)
		os.mkdir(sysgensdirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % sysgensdirectory
		tkMessageBox.showinfo("Error in creating directory", errmessage)
	return [workingdirectory,systemdirectory,sysdatadirectory,sysgensdirectory]