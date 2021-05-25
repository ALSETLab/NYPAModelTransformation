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
def askDir(): # note that here the dir stands for directory
	userpath = tkFileDialog.askdirectory()
	return userpath
#====================================================================================      
# Function: askRaw
# Authors: marcelofcastro and ManuelNvro          
# Description: this function ask for raw files.
#====================================================================================
def askRawfile():
	rawfile = tkFileDialog.askopenfilename(filetypes=[("Raw files", ".raw")])
	return rawfile
#====================================================================================      
# Function: askDyr
# Authors: marcelofcastro and ManuelNvro          
# Description: this function ask for dyr files.
#====================================================================================
def askDyrfile(): # note that here dyr stands for dynamic raw file
	dyrfile = tkFileDialog.askopenfilename(filetypes=[("Dyr files", ".dyr")])
	return dyrfile
#====================================================================================      
# Function: createDir
# Authors: ManuelNvro          
# Description: this function creates the folder and subfolders for model translation
#====================================================================================
def createDir(userpath):
	# ----- Getting paths and naming directories:
	workingdirectory = userpath + "/Translation" # name of main folder
	systemdirectory = userpath + "/Translation/System" # name of test system folder
	sysdatadirectory = userpath + "/Translation/System/Data" # name of data folder
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
	try:
		if os.path.exists(sysdatadirectory):
			shutil.rmtree(sysdatadirectory)
		os.mkdir(sysdatadirectory)
	except OSError:
		errmessage = "Creation of the directory %s failed" % sysdatadirectory
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