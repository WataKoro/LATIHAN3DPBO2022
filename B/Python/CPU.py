class Processor:
    __name = ""
    __priceCPU = 0
    
    def __init__(self, name, price):
        self.__name = name
        self.__priceCPU = price
    
    def setName(self, b):
        self.__name = b
    
    def getName(self):
        return self.__name
    
    def setPriceCPU(self, m):
        self.__priceCPU = m
    
    def getPriceCPU(self):
        return self.__priceCPU
    
    def printCPU(self):
        print("CPU           : "+str(self.__name))