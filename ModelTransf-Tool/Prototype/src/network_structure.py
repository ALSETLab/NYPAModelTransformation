#=========================================================================================      
# Authors: marcelofcastro        
# Description: Definition of classes for network structure. 
#
#=========================================================================================      
# Class: DynSys
# Authors: marcelofcastro         
# Description: this class should compile information for the system.
#=========================================================================================
class DynSys:
	def __init__(self, genInstances):
		self.instances = genInstances # bus number

#=========================================================================================      
# Class: DynNode
# Authors: marcelofcastro         
# Description: this class should extract information for each bus.
#=========================================================================================
class DynNode:
	def __init__(self, busCircuit, busKV):
		self.circuit = busCircuit # bus circuit
		self.busKV = busKV # bus base voltage
#=========================================================================================      
# Class: DynCircuit
# Authors: marcelofcastro         
# Description: this class should extract information for each bus.
#=========================================================================================
class DynCircuit:
	def __init__(self, circMach, circExc, circTgov, circPSS):
		self.mac = circMach # main, normally machine
		self.exc = circExc # first controller, normally exciter
		self.gov = circTgov # second controller, normally turbine-governor
		self.pss = circPSS # third controller, normally pss

class Branch:
	def __init__(self, busFrom, busTo, branchNmbr,branchR, branchX, branchB):
		self.busFrom = busFrom
		self.busTo = busTo
		self.branchNmbr = branchNmbr
		self.branchR = branchR
		self.branchX = branchX
		self.branchB = branchB