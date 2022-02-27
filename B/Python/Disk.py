class Disk:
    __type = ""
    __capacity = 0
    __priceDisk = 0
    
    def __init__(self, type, capacity, price):
        self.__type = type
        self.__capacity = capacity
        self.__priceDisk = price
    
    def setType(self, b):
        self.__type = b
    
    def getName(self):
        return self.__type
    
    def setCapacity(self, m):
        self.__capacity = m
    
    def getCapacity(self):
        return self.__capacity
    
    def setPriceDisk(self, m):
        self.__priceDisk = m
    
    def getPriceDisk(self):
        return self.__priceDisk
    
    def printDisk(self):
        print("Disk          : "+str(self.__type))