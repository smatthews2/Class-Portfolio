/*
 * file: WatchTester.java
 * author: 
 * Date Modified:
 * Description:
 */

import java.util.ArrayList;
import java.util.Random;


public class WatchTester{

    public static void main(String[] args){

        //create a general "watch" class object
        Watch myWatch = new Watch();

        //print the watch object using the toString() override
        System.out.println(myWatch);
        
        //create a "Timex" class object
        Watch myTimex = new Timex();

        //print the "Timex" class object using the toString() override
        System.out.println(myTimex);

        //create an ArrayList of watch objects, 
        //some are generic watches, some are Timex watches

        ArrayList<Watch> myArrayList = new ArrayList<Watch>();
        //we specific the element type that the ArrayList will hold with < >

        //add some watches to the ArrayList
        for(int i = 0; i < 5; i++){
            myArrayList.add(new Watch());
        }

        //add another Timex watch to the ArrayList;
        myArrayList.add(new Timex());

        //we can add Timex objects to our ArrayList of Watch objects,
        //because Timex objects are Watch objects

        //print the arrayList
        printArrayList(myArrayList);

        //ArrayLists are dynamic, like Linked Lists. However, unlike
        //linked lists, we can access an element by index using .get()

        //set the times to sometime random
        for(int i = 0; i < myArrayList.size(); i++){
            setRandomTime(myArrayList.get(i));  //we can use both Watch objects and Timex objects!
        }

        //print after randomizing times
        System.out.println("\nAfter Randomizing times:\n");

        printArrayList(myArrayList);

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