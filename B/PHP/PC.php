<?php
include "CPU.php";
include "Disk.php";
include "RAM.php";

class PC{
    private $total = 0;

    public function __construct($CPU, $RAM, $Disk){
        $this->CPU = $CPU;
        $this->RAM = $RAM;
        $this->Disk = $Disk;
    }

    public function setCPU($c){
        $this->CPU = $c;
    }

    public function getCPU(){
        return $this->CPU;
    }

    public function setRAM($r){
        $this->RAM = $r;
    }

    public function getRAM(){
        return $this->RAM;
    }
    public function setDisk($d){
        $this->Disk = $d;
    }

    public function getDisk(){
        return $this->Disk;
    }

    public function total(){
        $total = $this->CPU->getPriceCPU() + $this->RAM->getPriceRAM() + $this->Disk->getPriceDisk();
        return $total;
    }
    public function printSpec(){
        $this->CPU->printCPU();
        $this->RAM->printRAM();
        $this->Disk->printDisk();
        echo "Harga Total         : ". $this->total() ."<br>";
    }
}

?>