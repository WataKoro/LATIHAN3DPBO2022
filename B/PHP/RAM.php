<?php

class RAM{
    private $capacity = 0;
    private $priceRAM = 0;

    public function __construct($capacity = 0, $priceRAM = 0){
        $this->capacity = $capacity;
        $this->priceRAM = $priceRAM;
    }

    public function setCapacity($capacity){
        $this->capacity = $capacity;
    }

    public function getCapacity(){
        return $this->capacity;
    }

    public function setPriceRAM($priceRAM){
        $this->priceRAM = $priceRAM;
    }

    public function getPriceRAM(){
        return $this->priceRAM;
    }

    public function printRAM(){
        echo "RAM          : ". $this->capacity . "<br>";
    }
}

?>