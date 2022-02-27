class RAM{
    private int capacity;
    private int priceRAM;

    public RAM(int c, int m){
        this.capacity = c;
        this.priceRAM = m;
    }

    public void setCapacity(int f){
        this.capacity = f;
    }

    public int getCapacity(){
        return capacity;
    }

    public void setPriceRAM(int m){
        this.priceRAM = m;
    }

    public int getPriceRAM(){
        return priceRAM;
    }

    public void printRAM(){
        System.out.println("RAM           : " + capacity);
    }
}