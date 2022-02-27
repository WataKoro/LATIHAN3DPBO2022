public class PC{
    private Processor CPU;
    private RAM memory;
    private Disk drive;
    private int priceTotal;

    public PC(Processor p, RAM m, Disk d){
        this.CPU = p;
        this.memory = m;
        this.drive = d;
    }

    public void setCPU(Processor p){
        this.CPU = p;
    }

    public Processor getCPU(){
        return CPU;
    }

    public void setMemory(RAM m){
        this.memory = m;
    }

    public RAM getMemory(){
        return memory;
    }

    public void setDrive(Disk m){
        this.drive = m;
    }

    public Disk getDrive(){
        return drive;
    }

    public int total(){
        priceTotal =this.CPU.getPriceCPU() + this.memory.getPriceRAM() + this.drive.getPriceDisk();
        return priceTotal;
    }

    public void printSpec(){
        this.CPU.printCPU();
        this.memory.printRAM();
        this.drive.printDisk();
        System.out.println("Harga Total   : " + total());
    }
}