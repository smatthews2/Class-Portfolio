package inputValidation;
import java.util.InputMismatchException;
import java.util.Scanner;

public class GetInput {
    
    GetInput(){

    }

    //what other inputs do we have?
    // yyynn (variable length)
    // y/n Y/N yes/no etc...
    // some key values like "FH" for full house
    // maybe change to boolean check play again?

    public static String chooseKeepers(Scanner scan, int numDice, String message){
        
        

        //pre condition checks
        if(scan == null){
            throw new IllegalArgumentException();
        }
        
        
        int num = -1;
        boolean validInput = false;
        String str = "";

        //roll 4 5 6 2 3
        //ask: enter y/n for each dice to keep
        //depending on number of dice

        do{
            try{
                System.out.println(message);
                
                str = scan.nextLine();

                //check if they enough input
                if(numDice != str.length()){
                    throw new Exception();
                }

                for(int i = 0; i < str.length(); i++){
                    if(str.charAt(i) != 'y' && str.charAt(i) != 'n'){
                        throw new InputMismatchException();
                    }
                }

                validInput = true;
            }catch(Exception ex){
                System.out.println("invalid input.");
            }
        }while(!validInput);
        return null;
    }


    public static int getInteger(Scanner scan, String message){
        //todo check null scanner
        int num = -1;
        boolean validInput = false;
        String str = "";
        do{
            try{
                System.out.println(message);
                
                str = scan.nextLine();
                num = Integer.parseInt(str);
                validInput = true;
            }catch(Exception ex){
                System.out.println("invalid input.");
            }
        }while(!validInput);

        return num;
    }
}
