<?php

class CPU{
    private $name = 0;
    private $priceCPU = 0;

    public function __construct($name = 0, $priceCPU = 0){
        $this->name = $name;
        $this->priceCPU = $priceCPU;
    }

    public function setName($name){
        $this->name = $name;
    }

    public function getName(){
        return $this->name;
    }

    public function setPriceCPU($p){
        $this->priceCPU = $p;
    }

    public function getPriceCPU(){
        return $this->priceCPU;
    }

    public function printCPU(){
        echo "CPU          : ". $this->name . "<br>";
    }
}

?>