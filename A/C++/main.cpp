#include <iostream>
#include <string>
using namespace std;

#include "PC.cpp"

int main(){
    Processor CPU1("Ryzen 7 3700X", 4500000);
    RAM RAM1(32, 3000000);
    Disk DISK1("SSD", 500, 1500000);

    PC Komputer(CPU1, RAM1, DISK1);

    printf("=================================\n");
    Komputer.printSpec();

    return 0;
}

//Saya Irfan Mochamad Esa 2005568 mengerjakan LATIHAN3 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin