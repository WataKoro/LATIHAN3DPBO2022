#include <iostream>
#include <string>
using namespace std;

class RAM{
    private:
        int capacity;
        int priceRAM;
    public:
        RAM() { }
        RAM(int c, int p){
            this->capacity=c;
            this->priceRAM=p;
        }

        void setCapacity(int i){
            this->capacity = i;
        }

        int getCapacity(){
            return this->capacity;
        }

        void setpriceRAM(int p){
            this->priceRAM = p;
        }

        int getpriceRAM(){
            return this->priceRAM;
        }

        void printRAM(){
            cout<<"RAM           : "<<this->capacity<<endl;
        }
        ~RAM() { }
};