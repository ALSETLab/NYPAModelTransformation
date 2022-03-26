from tkinter import *

class Faultinfo(object):
    bus = 5
    resistance = 0.0
    reactance = 0.0
    time = 0.5
    duration = 0.2

    def __init__(self,window):
        self.window = window

    def complete(self):
        if self.bus > 0 and self.time > 0 and self.duration > 0 and self.reactance >= 0 and self.resistance >= 0:
            return True
        else:
            return False

    def add_fault(self, needed):
        if needed == 1:
            fault_window = Toplevel(self.window)
            fault_window.geometry("300x200")
            fault_window.title("Fault Event Settings")

            # ----- Bus number:
            Label(fault_window, text="Fault bus number:").grid(column=0, row=0)
            Bustxt = Entry(fault_window, width=15)
            Bustxt.insert(0, self.bus)
            Bustxt.grid(column=1, row=0)

            # ----- R and X:
            Label(fault_window, text="R (pu, system's base):").grid(column=0, row=1)
            Resistancetxt = Entry(fault_window, width=15)
            Resistancetxt.insert(0, self.resistance)
            Resistancetxt.grid(column=1, row=1)
            Label(fault_window, text="X (pu, system's base):").grid(column=0, row=2)
            Reactancetxt = Entry(fault_window, width=15)
            Reactancetxt.insert(0, self.reactance)
            Reactancetxt.grid(column=1, row=2)

            # ----- initial and end times:
            Label(fault_window, text="Fault time (s):").grid(column=0, row=3)
            Timetxt = Entry(fault_window, width=15)
            Timetxt.insert(0, self.time)
            Timetxt.grid(column=1, row=3)
            Label(fault_window, text="Clearing time (s):").grid(column=0, row=4)
            Durationtxt = Entry(fault_window, width=15)
            Durationtxt.insert(0, self.duration)
            Durationtxt.grid(column=1, row=4)

            # ----- assembling array:
            def getFaultInfo():
                # ----- get data:
                try:
                    self.bus = int(Bustxt.get())
                except:
                    print('Invalid input. Please enter an integer as a bus number.')
                try:
                    self.Resistance = float(Resistancetxt.get())
                    self.Reactance = float(Reactancetxt.get())
                except:
                    print('Invalid input. Please enter R and X as real numbers.')
                try:
                    self.Time = float(Timetxt.get())
                    self.Duration = float(Durationtxt.get())
                except:
                    print('Invalid input. Please enter time instants as real numbers.')
                # ----- create data vector
                fault_window.destroy()

            # ----- closing window button:
            closebtn = Button(fault_window, text="Add Event", command=getFaultInfo)
            closebtn.grid(column=1, row=5)