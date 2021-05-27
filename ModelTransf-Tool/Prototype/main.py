#================================================================================== 
# Code Part: Loading libraries     
# Author: marcelofcastro         
# Description: Loading libraries the whole system. Compatible with python 2. and 3.
#==================================================================================
# ----- Importing Tkinter:
try:
    # for Python2
    from Tkinter import * ## notice capitalized T in Tkinter 
    from Tkinter import ttk
    from Tkinter import tkFileDialog
    from Tkinter import tkMessageBox
except ImportError:
    # for Python3
    from tkinter import *   ## notice lowercase 't' in tkinter here
    from tkinter import ttk
    import tkinter.filedialog as tkFileDialog
    import tkinter.messagebox as tkMessageBox
# ----- Importing sys module:
import sys, os, time
homedir= os.getcwd()
# ----- Adding paths for new modules:
srcdir = homedir + "/src"
auxdir = homedir + "/fcn"
imgdir = homedir + "/img" # create img dir path
sys.path.insert(1, srcdir)
sys.path.insert(2, auxdir)
sys.path.insert(3, imgdir) # add img dir to home path
# ----- Importing auxiliary functions:
import directory_functions
import psse2mo
#==================================================================================
# Code Part: Functions for GUI 
# Author: marcelofcastro         
# Description: Definition of functions for reading files.
#==================================================================================
def donothing():
    filewin = Toplevel(root)
    button = Button(filewin, text="Do nothing button")
    button.pack()
def debug():
    print(srcdir)
    print(auxdir)
def frompsse(rawfile,dyrfile,encode_flag,userpath):
    # ----- RAW file reader:
    #rawfile = directory_functions.askRawfile() 
    start_readraw = time.time() # initial time for raw.
    [system_base,system_frequency,sysdata,psse_version] = psse2mo.readRaw(rawfile,encode_flag) # parse and format rawfile for sysdata
    time_readraw = time.time() - start_readraw # time for raw.
    # ----- DYR file reader:
    #dyrfile = directory_functions.askDyrfile() 
    start_readdyr = time.time() # initial time for dyr.
    dyrdata = psse2mo.readDyr(dyrfile)
    time_readdyr = time.time() - start_readdyr # time for dyr.
    # ----- Creating directories:
    #userpath = directory_functions.askDir() 
    # ----- Translation to Modelica:
    start_trans = time.time() # initial time.
    [wdir,sdir,ddir,gdir] = directory_functions.createDir(userpath) # creates folders for placement of results   
    psse2mo.writeMo(wdir,sdir,ddir,gdir,system_base,system_frequency,sysdata,dyrdata) # writes models
    time_trans = time.time()- start_trans # calculate execution time
    # ----- Updating parameters and writing log:
    total_time = time_trans + time_readraw + time_readdyr
    times = [time_readraw,time_readdyr,time_trans,total_time]
    psse2mo.writeLog(wdir,system_base,system_frequency,psse_version,sysdata,dyrdata,times) 
    # ----- Message for confirming data is correct:
    message = " PSS(R)E version: %.0f.\n System power base: %.1f MVA.\n System frequency: %.0f Hz." % (psse_version,system_base,system_frequency)
    tkMessageBox.showinfo("PSSE File Translated", message) # displays psse version, base power and system frequency
def menu_from_psse():
	# ----- Create widget window:
	window = Tk()
	window.title("Translation Settings")
	window.geometry('900x250')
	# ----- Raw file path:
	raw = Label(window, text=".RAW file path:")
	raw.grid(column=0, row=0)
	txt1 = Entry(window,width=75)
	txt1.grid(column=1, row=0)
	def rawpath():
	    rawfile = directory_functions.askRawfile() # ask the user which raw file will be translated
	    txt1.insert (0,rawfile)
	btn1 = Button(window, text="Find", command=rawpath)
	btn1.grid(column=2, row=0)
	# ----- DYR file:
	dyr = Label(window, text=".DYR file path:")
	dyr.grid(column=0, row=1)
	txt2 = Entry(window,width=75)
	txt2.grid(column=1, row=1)
	def dyrpath():
	    dyrfile = directory_functions.askDyrfile() # ask the user which dyr file will be translated
	    txt2.insert (0,dyrfile)
	btn2 = Button(window, text="Find", command=dyrpath)
	btn2.grid(column=2, row=1)
	# ----- Configure RAW:
	config = Label(window, text=".RAW interpreter:")
	config.grid(column=0, row=2)
	selected = IntVar()
	rad1 = Radiobutton(window,text='utf-8', value=0, variable=selected)
	rad2 = Radiobutton(window,text='latin1', value=1, variable=selected)
	rad1.grid(column=1, row=2)
	rad2.grid(column=1, row=3)
	interp = selected.get()
	# ----- Translation destination:
	trn = Label(window, text="Translation dir:")
	trn.grid(column=0, row=4)
	txt3 = Entry(window,width=75)
	txt3.grid(column=1, row=4)
	def usrpath():
	    userpath= directory_functions.askDir() # get directory where user wants files to be placed
	    txt3.insert (0,userpath)
	btn3 = Button(window, text="Find", command=usrpath)
	btn3.grid(column=2, row=4)
	# ----- Translation start button:
	def startTranslation():
		frompsse(txt1.get(),txt2.get(),interp,txt3.get())
		window.destroy()
	strtbtn = Button(window, text="Start Translation", command=startTranslation)
	strtbtn.grid(column=1, row=5)
    
#==================================================================================
# Code Part: Graphical User Interface   
# Author: marcelofcastro          
# Description: Python GUI interface for model translation tool.
#==================================================================================  
root = Tk()
# ----- Root Frame:
root.title("Model Translation Tool")
root.geometry("350x700")
# ----- Right frame with additional info:
rightframe = Frame(master=root, width=400, height=700, bg="white")
rightframe.pack(side=RIGHT)
introtxt = "Model Translation Tool"
copytxt = "AlsetLab and New York Power Authority \n 2021"
canvas = Canvas(rightframe, width = 400, height = 700, bg="white")
canvas.pack(fill = BOTH, expand = True)
icon = PhotoImage(file = imgdir+'/icon.png')
icon = icon.zoom(4)
icon = icon.subsample(9)
canvas.create_image(190, 235, image=icon)
canvas.create_text(175, 50, text = introtxt, font = ('Times New Roman', 18), justify = 'center', fill='black')
canvas.create_text(175, 650, text = copytxt, font = ('Times New Roman', 12), justify = 'center', fill='black')
canvas.update

# ----- Menu
menubar = Menu(root)
filemenu = Menu(menubar, tearoff=0)
menubar.add_cascade(label="File", menu=filemenu)
newmenu = Menu(menubar,tearoff=0)
filemenu.add_cascade(label="New Translation", menu=newmenu)
newmenu.add_command(label="From PSS/E File",command = menu_from_psse)
newmenu.add_command(label="From CIM File",command = donothing)
compmenu = Menu(menubar,tearoff=0)
filemenu.add_cascade(label="New Comparison", menu=compmenu)
compmenu.add_command(label="Compare files",command = donothing)
compmenu.add_command(label="Compare folders of files",command = donothing)
filemenu.add_separator()
filemenu.add_command(label="Exit", command=root.quit)
helpmenu = Menu(menubar, tearoff=0)
helpmenu.add_command(label="Debug Function", command=debug)
helpmenu.add_command(label="Help Index", command=donothing)
helpmenu.add_command(label="About...", command=donothing)
menubar.add_cascade(label="Help", menu=helpmenu)
root.config(menu=menubar)
root.mainloop()