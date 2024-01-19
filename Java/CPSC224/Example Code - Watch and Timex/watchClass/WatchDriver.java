/*
 * file: WatchTester.java
 * author: 
 * Date Modified:
 * Description:
 */

 
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;



public class WatchDriver{

    public static void main(String[] args){

        //create a general "watch" class object
        //Watch myWatch = new Watch();

        //print the watch object using the toString() override
        //System.out.println(myWatch);

        Timex myTimex = new Timex();

        System.out.println(myTimex);

        System.out.println("Charge: " + myTimex.batt.getCharge());

        myTimex.checkTime();

        System.out.println("Charge: " + myTimex.batt.getCharge());
        
        /*
        File myFile = new File("watchConfig.txt");

        try{
            Scanner scan = new Scanner(myFile);
            String line = scan.nextLine();
            scan.close();

            scan = new Scanner(myFile);


        }catch(FileNotFoundException ex){

        }
        */
        

    }

    

    /*
     * prints the array list, each element is printed on a seperate line.
     */
    public static void printArrayList(ArrayList<Watch> arrList){
    
        for(int i = 0; i < arrList.size(); i++){
            System.out.println(arrList.get(i)); //we can print the watch easily because
                                                //we overrode the toString() method!
        }
    
    }

    /*
     * Function will take in a watch object and set the time to some random valid number
     * This will accept Watch objects or objects that inherit from Watch objects (like Timex objects)
     */
    public static void setRandomTime(Watch myWatch){

        //use the Random library to generate a random number within a range
        Random rand = new Random();

        myWatch.setHour(rand.nextInt(24));
        myWatch.setMinute(rand.nextInt(60));
        myWatch.setSecond(rand.nextInt(60));

    }

    /*
     * Helper method to print a given array of integers
     * Output will be the elements of that array on a single
     * line, with a newline character at the end.
     */
    public static void printArray(int[] arr){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i]);
        }
        System.out.println();
    }

    /*
     * Helper method to demonstrate how Java interacts with
     * passing arrays to methods. The result is that the array
     * changes will persist outside of this method block.
     */
    public static void addOne(int[] x){
        x[0] = 7;
    }

}