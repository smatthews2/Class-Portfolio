package inputValidation;

import java.util.Scanner;

class Main{

    public static void main(String[] args) {
        

        //goal is to get an integer from the user
        //AND not crash if they don't give an integer
        // ...what about unit testing, how do you unit test user input?
        //  
        //

        Scanner scan = new Scanner(System.in);
        
        
        //int num = GetInput.getInteger(scan, "Please enter an integer");

        GetInput.chooseKeepers(scan, 5, "enter y to keep and n to not keep");
        

        //System.out.println("you entered: [" + num + "]");


        //scanner close here?



    }

}