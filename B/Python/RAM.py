class RAM():
    __capacity = 0
    __priceRAM = 0
    
    def __init__(self, capacity, price):
        self.__capacity = capacity
        self.__priceRAM = price
    
    def setCapacity(self, f):
        self.__capacity = f
    
    def getCapacity(self):
        return self.__capacity
    
    def setPriceRam(self, m):
        self.__priceRAM = m
    
    def getPriceRAM(self):
        return self.__priceRAM
    
    def printRAM(self):
        print("RAM           : "+str(self.__capacity))