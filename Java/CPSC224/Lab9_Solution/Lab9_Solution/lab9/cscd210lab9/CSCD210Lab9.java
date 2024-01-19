package lab9.cscd210lab9;

import java.io.*;
import java.util.Scanner;
import lab9.cscd210methods.CSCD210Lab9Methods;

/**
 * methods class for lab 9.
 */
public class CSCD210Lab9
{

   /**
    * Default Constructor
    */
   public CSCD210Lab9()
   {}
   
   /**
    * The main method.  You can't change the code in this method
    * or this class in any fashion
    *
    * @param args Representing any command line arguments passed into main
    */
   public static void main(String [] args)
   {
      int choice = 0;
      String fileName = null;
      Scanner kb = new Scanner(System.in);
      
      do
      {
         try {
            choice = CSCD210Lab9Methods.printMenu(kb, fileName);
         } catch (Exception ex) {
            System.out.println("Exception occured in printMenu method.");
            System.out.println(ex.toString());
         }
         
         switch(choice)
         {
            case 1: {
               try {
                  fileName = CSCD210Lab9Methods.readFileName(kb, fileName);
               } catch (Exception ex) {
                  System.out.println("Exception occured in readFileName method.");
                  System.out.println(ex.toString());
               }
               break;
            }
                    
            case 2: {
               try {
                  CSCD210Lab9Methods.fileProperties(fileName);
               } catch (Exception ex) {
                  System.out.println("Exception occured in fileProperties method.");
                  System.out.println(ex.toString());
               }
               break;  
            }

            case 3: {
               try{
                  CSCD210Lab9Methods.printFileContents(fileName);
               }catch(Exception ex){
                  System.out.println("Exception occured in printFileContents method.");
                  System.out.println(ex.toString());
               }
                  break;
            }

            case 4: {
               try{
                  CSCD210Lab9Methods.writeToFile(fileName, kb);
               }catch(Exception ex){
                  System.out.println("Exception occured in writeToFile method.");
                  System.out.println(ex.toString());
               }
               break;
            }

            case 5: System.out.println("Good Bye");         
         
         }// end switch
            
      }while(choice != 5);

      kb.close();
  
   }// end main

}// end class