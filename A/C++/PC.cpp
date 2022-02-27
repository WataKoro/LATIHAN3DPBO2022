#include "CPU.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

class PC{
    private:
        Processor CPU;
        RAM Memory;
        Disk Drive;
        int priceTotal;
    public:
        PC() { }
        PC(Processor p, RAM m, Disk d){
            this->CPU = p;
            this->Memory = m;
            this->Drive = d;
        }

        void setCPU(Processor p){
            this->CPU = p;
        }

        Processor getCPU(){
            return this->CPU;
        }

        void setMemory(RAM m){
            this->Memory = m;
        }

        RAM getMemory(){
            return this->Memory;
        }

        void setDrive(Disk d){
            this->Drive = d;
        }

        Disk getDrive(){
            return this->Drive;
        }

        int total(){
            this->priceTotal = 0 + this->CPU.getPriceCPU() + this->Drive.getPriceDisk() + this->Memory.getpriceRAM();
            return this->priceTotal;
        }

        void printSpec(){
            this->CPU.printCPU();
            this->Memory.printRAM();
            this->Drive.printDisk();
            printf("Total harga   : %d", total());
        }
        ~PC() { }
};