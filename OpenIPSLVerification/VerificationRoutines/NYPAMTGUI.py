from tkinter import *
import tkinter as tk
from PIL import ImageTk,Image
import os
import subprocess

currentDir = os.getcwd()


root = Tk()

root.title("NYPA Trasformation")

title = Label(root, text= "NYPA Transformation and Modelica Mass Simulation Tool", font=("Arial Bold", 17))
title.pack()

created = Label(root, text= "Created by: ALSET Laboratory, 2019-2020", font=("Arial Bold", 10))
created.pack()

rpilogo = ImageTk.PhotoImage(Image.open("figures/rpilogo.png").resize((70,70)))
lbl0 = Label(image=rpilogo)
lbl0.pack()

nypalogo = ImageTk.PhotoImage(Image.open("figures/nypalogo.png").resize((100,80)))
lbl1 = Label(image=nypalogo)
lbl1.pack()

tool = Label(root, text= "1. Please select the modeling tool:", font=("Arial Bold", 15))
tool.pack(pady = 10)
toolselection = StringVar()
toolselection.set("Dymola")
tooldrop = OptionMenu(root, toolselection, "Dymola", "OpenModelica")
tooldrop.pack()

test = Label(root, text= "2. Please select the test to be performed:", font=("Arial Bold", 15))
test.pack(pady = 10)
testselection = StringVar()
testselection.set("Fault")
testdrop = OptionMenu(root, testselection, "Fault", "LoadVariation", "ReferenceStep")
testdrop.pack()

models = Label(root, text= "3. Please select the models to simulate:", font=("Arial Bold", 15))
models.pack(pady = 10)
modelselection = StringVar()
modelselection.set("Exciters")
modeldrop = OptionMenu(root, modelselection, "Exciters", "Machines", "PowerSystemStabilizers", "TurbineGovernors", "WintTurbines", "RunAll")
modeldrop.pack()

def show():

	lbl2 = Label(root, text = "Now simulating Script in: " + currentDir + "/" + toolselection.get() + "/" + testselection.get() + "/" + testselection.get() + modelselection.get() + toolselection.get() + ".py")
	lbl2.pack()

	lbl3 = Label(root, text = "Current Directory is:" +  currentDir)
	lbl3.pack()


	os.system("python "+ currentDir + "/" + toolselection.get() + "/Scripts/" + testselection.get() + "/" + testselection.get() + modelselection.get() + toolselection.get() + ".py > log.txt")
	print("python "+ currentDir + "/" + toolselection.get() + "/" + testselection.get() + "/" + testselection.get() + modelselection.get() + toolselection.get() + ".py > log.txt")
	lbl4 = Label(root, text = "Simulation running, results can be found in the Working Directory and log.txt file...")
	lbl4.pack()

button = Button(root, text="Simulate!", font  =("Arial Bold", 13), command = show)
button.pack(pady = 20)

mainloop()