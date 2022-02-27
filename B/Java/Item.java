class Disk{
    private String type;
    private int capacity;
    private int priceDisk;

    public Disk(String type, int c, int p){
        this.type = type;
        this.capacity = c;
        this.priceDisk = p;
    }

    public void setType(String b){
        this.type = b;
    }

    public String getType(){
        return type;
    }

    public void setCapacity(int m){
        this.capacity= m;
    }

    public int getCapacity(){
        return capacity;
    }

    public void setPriceDisk(int m){
        this.priceDisk= m;
    }

    public int getPriceDisk(){
        return priceDisk;
    }

    public void printDisk(){
        System.out.println("Disk          : " + type + " " + capacity);
    }
}