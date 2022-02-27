from CPU import Processor
from Disk import Disk
from RAM import RAM

class PC():
    def __init__(self, cName, cPrice, dType, dCapa, dPrice, rCapa, rPrice):
        self.__processor = Processor(cName, cPrice)
        self.__disk = Disk(dType, dCapa, dPrice)
        self.__ram = RAM(rCapa, rPrice)

    def setCPU(self, i):
        self.__processor = i
    
    def getCPU(self):
        return self.__processor
    
    def setDisk(self, p):
        self.__disk = p
    
    def getDisk(self):
        return self.__disk
    
    def setRAM(self, p):
        self.__ram = p
    
    def getRAM(self):
        return self.__ram
    
    def printSpec(self):
        Processor.printCPU(self.__processor)
        Disk.printDisk(self.__disk)
        RAM.printRAM(self.__ram)
        price = Processor.getPriceCPU(self.__processor) + Disk.getPriceDisk(self.__disk) + RAM.getPriceRAM(self.__ram)
        print("Harga Total   : "+str(price))