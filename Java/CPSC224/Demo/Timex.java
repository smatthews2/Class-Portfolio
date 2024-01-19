/*
 * file: Timex.java
 * author: 
 * Date Modified:
 * Description:
 */

public class Timex extends Watch{
    
    private String feature;

    //default constructor
    Timex(){
        super();    //call the parent constructor Watch()
                    //this means that all the behavior contained
                    //in the Watch() constructor will be executed

        System.out.println("Timex constructor called");

        //change the feature of this watch
        this.feature = "Indiglo";

        //set the brand name to be Timex

        //this is one way
        setBrand("Timex");

        //this is another way
        //super.setBrand("Timex");

        //notice that we don't always have to use super.
        //why?
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
