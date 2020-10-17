#=========================================================================================      
# Authors: marcelofcastro        
# Description: Definition of classes for network structure. 
#=========================================================================================
#=========================================================================================      
# Class: Node
# Authors: marcelofcastro         
# Description: this class should extract information for each bus.
#=========================================================================================
class Node:
	def __init__(self, busOrdr, busNmbr, busName, busKV, busType, busVoltage, busAngle):
		self.busOrdr = busOrdr # auxiliary number of bus
		self.busNmbr = busNmbr # bus number in system
		self.busName = busName # bus name
		self.busKV = busKV # bus base voltage
		self.busType = busType # bus type (1,2,3,4)
		self.busVoltage = busVoltage # bus voltage magnitude in per unit
		self.busAngle = busAngle # bus voltage angle in degrees
class Branch:
	def __init__(self, busFrom, busTo, branchNmbr,branchR, branchX, branchB):
		self.busFrom = busFrom
		self.busTo = busTo
		self.branchNmbr = branchNmbr
		self.branchR = branchR
		self.branchX = branchX
		self.branchB = branchB