<?php

class Disk{
    private $type = 0;
    private $capacity = 0;
    private $priceDisk = 0;

    public function __construct($type = 0, $capacity=0, $priceDisk = 0){
        $this->type = $type;
        $this->capacity = $capacity;
        $this->priceDisk = $priceDisk;
    }

    public function setType($t){
        $this->type = $t;
    }

    public function getType(){
        return $this->type;
    }

    public function setCapacity($t){
        $this->capacity = $t;
    }

    public function getCapacity(){
        return $this->capacity;
    }

    public function setPriceDisk($p){
        $this->priceDisk = $p;
    }

    public function getPriceDisk(){
        return $this->priceDisk;
    }

    public function printDisk(){
        echo "Disk         : ". $this->type . " " . $this->capacity. "<br>";
    }
}

?>