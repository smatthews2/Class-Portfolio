/*
 * file: Timex.java
 * author: 
 * Date Modified:
 * Description:
 */

 

public class Timex extends Watch{
    
    private String feature;
    public Battery batt;

    //default constructor
    public Timex(){
        super();
        this.feature = "Indiglo";
        setBrand("Timex");
        this.batt = new Battery();

    }

    public void checkTime(){
        System.out.println("The Time is: " + this);
        this.batt.setCharge(-10);
    }

    /*
     * Override the default behavior of toString()
     * first, using super.toString(), we are envoking the
     * toString() method from the parent class "Watch", 
     * which returns a String. Then we concatenate onto the end
     * more information pertaining to our "Timex" object.
     */
    @Override
    public String toString(){
        return super.toString() + " Brand: " + this.getBrand() + " Feature: " + this.feature;
    }
}
