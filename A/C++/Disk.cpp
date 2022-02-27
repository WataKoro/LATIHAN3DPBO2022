#include <iostream>
#include <string>
using namespace std;

class Disk{
    private:
        string type;
        int capacity;
        int priceDisk;
    public:
        Disk() { }
        Disk(string t, int c, int p){
            this->type=t;
            this->capacity=c;
            this->priceDisk=p;
        }

        void setType(string i){
            this->type = i;
        }

        string getType(){
            return this->type;
        }

        void setCapacity(int p){
            this->capacity = p;
        }

        int getCapacity(){
            return this->capacity;
        }

        void setPriceDisk(int p){
            this->priceDisk = p;
        }

        int getPriceDisk(){
            return this->priceDisk;
        }

        void printDisk(){
            cout<<"DISK          : "<<this->type << " " << this->capacity << endl;
        }
        ~Disk() { }
};