# =========================================================================================
# Description: Functions used to translate CIM EQ,DY,TP files into .mo files.
# =========================================================================================
import tkinter
from saxonpy import *  # importing xml translation
from Faultinfo import *
import os
import time

class Cimtomo(object):
    __Fault = Faultinfo
    __userpath = "%HOMEPATH%\\desktop"
    @property
    def __basepath(self):
        return os.path.dirname(self.__EQxmlfile)
    @property
    def __basename(self):
        return os.path.basename(self.__EQxmlfile).split("_")[0]
    @property
    def __base(self):
        return os.path.join(self.__basepath,self.__basename)
    @property
    def __xslpath(self):
        return os.path.dirname(self.__xslfile)

    def __init__(self):
        self.__CIMWindow = Toplevel()
        self.__EQxmlfile = os.getcwd() + "\\examples\\bus-14\\ieee14_EQ.xml"
        self.__xslfile = os.getcwd() + "\\src\\cim2mo\\CIMtoMO.xsl"

    def __Translate(self):  # EQ file, XSL file, Path of all files
        if os.path.exists(self.__basepath) and os.path.exists(self.__xslpath) and len(self.__basename) > 0:
            with PySaxonProcessor(license=False) as proc:
                xsltproc = proc.new_xslt30_processor()
                xsltproc.set_cwd(self.__basepath)
                xsltproc.set_parameter("filename", proc.make_string_value(str(self.__base).replace('\\','/')))  # XSLT pass in 'base' file name
                if self.__Fault.complete:
                    xsltproc.set_parameter("bus", proc.make_integer_value(self.__Fault.bus))
                    xsltproc.set_parameter("resistance", proc.make_double_value(self.__Fault.resistance))
                    xsltproc.set_parameter("reactance", proc.make_double_value(self.__Fault.reactance))
                    xsltproc.set_parameter("time", proc.make_double_value(self.__Fault.time))
                    xsltproc.set_parameter("duration", proc.make_double_value(self.__Fault.duration))
                results = xsltproc.transform_to_string(source_file=self.__EQxmlfile,
                                                       stylesheet_file=self.__xslfile)  # Translate
                print(results)
                return [results,proc.cwd,proc.version]
        else:
            return ["none", "", ""]

    def Window(self):
        fault_flag = IntVar()
        CIMwindow = self.__CIMWindow
        CIMwindow.title("CIM Files")
        CIMwindow.geometry('900x250')

        # ----- XML file path:
        Label(CIMwindow, text="CIM EQ-file .XML file path:").grid(column=0, row=0)
        EQfiletext = Entry(CIMwindow, width=75)
        EQfiletext.insert(0,self.__EQxmlfile)
        EQfiletext.grid(column=1, row=0)
        def EQxmlpath():
            self.__EQxmlfile = tkinter.filedialog.askopenfilename(filetypes=[("XML files", ".xml")])
            EQfiletext.insert(0, self.__EQxmlfile)
        xml_button = Button(CIMwindow, text="Find", command=EQxmlpath)
        xml_button.grid(column=2, row=0)

        # ----- XSL file path:
        Label(CIMwindow, text="CIMtoMO3.XSL file path:").grid(column=0, row=1)
        XSLFiletext = Entry(CIMwindow, width=75)
        XSLFiletext.insert(0,self.__xslfile)
        XSLFiletext.grid(column=1, row=1)
        def xslpath():
            self.__xslfile = tkinter.filedialog.askopenfilename(filetypes=[("XSL files", ".xsl")])
            XSLFiletext.insert(0, self.__xslfile)
        xsl_button = Button(CIMwindow, text="Find", command=xslpath)
        xsl_button.grid(column=2, row=1)

        # ----- Translation destination:
        Label(CIMwindow, text="Translation dir (_package.mo):").grid(column=0, row=4)
        Destinationdirectory = Entry(CIMwindow, width=75)
        Destinationdirectory.insert(0, self.__userpath)
        Destinationdirectory.grid(column=1, row=4)
        def usrpath():
            self.__userpath = tkinter.filedialog.askdirectory()  # get directory where user wants result to be placed
            Destinationdirectory.insert(0,self.__userpath)
        dir_button = Button(CIMwindow, text="Find", command=usrpath)
        dir_button.grid(column=2, row=4)

        Label(CIMwindow, text="Add fault event:").grid(column=0, row=5)
        def sel():
            fault = Faultinfo(CIMwindow)
            fault.add_fault(1)
            self.__Fault = fault
        # ----- buttons
        Radiobutton(CIMwindow, text='yes', variable=fault_flag, value=1, command=sel).grid(column=1, row=5)
        Radiobutton(CIMwindow, text='no', variable=fault_flag, value=0, command=sel).grid(column=1, row=6)

        # ----- Translation start button:
        def startTranslation():
            start_readxml = time.time()  # initial time
            [output, system_frequency, psse_version] = self.__Translate()
            packagemo = open(self.__userpath + "/" + self.__basename + "_package.mo", "w+")
            packagemo.write(output)
            time_readxml = time.time() - start_readxml  # total time
            tkinter.messagebox.showinfo("CIM File Translated", output.split("annotation")[0])  # take everything before 'annotation'
            CIMwindow.destroy()
        Button(CIMwindow, text="Start Translation", command=startTranslation).grid(column=1, row=7)