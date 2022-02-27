class Processor{
    private String name;
    private int priceCPU;

    public Processor(String n, int p){
        this.name = n;
        this.priceCPU = p;
    }

    public void setName(String b){
        this.name = b;
    }

    public String getName(){
        return name;
    }

    public void setPriceCPU(int m){
        this.priceCPU= m;
    }

    public int getPriceCPU(){
        return priceCPU;
    }

    public void printCPU(){
        System.out.println("CPU           : " + name);
    }
}