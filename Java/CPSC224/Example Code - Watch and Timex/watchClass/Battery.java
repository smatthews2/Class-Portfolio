public class Battery {

    private int charge;
    
    //default constructor
    public Battery(){
        this.charge = 100;
    }

    public int getCharge(){
        return this.charge;
    }

    public void setCharge(int charge){
        this.charge += charge;
    }


}
