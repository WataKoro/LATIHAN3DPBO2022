#include <iostream>
#include <string>
using namespace std;

class Processor{
    private:
        string name;
        int priceCPU;
    public:
        Processor() { }
        Processor(string n, int p){
            this->name=n;
            this->priceCPU=p;
        }

        void setName(string i){
            this->name = i;
        }

        string getName(){
            return this->name;
        }

        void setPriceCPU(int p){
            this->priceCPU = p;
        }

        int getPriceCPU(){
            return this->priceCPU;
        }
        void printCPU(){
            cout<<"CPU           : "<<this->name<<endl;
        }
        ~Processor(){}
};