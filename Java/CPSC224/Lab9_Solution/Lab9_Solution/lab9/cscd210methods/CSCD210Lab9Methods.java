package lab9.cscd210methods;

import java.io.*;
import java.util.Scanner;
/**
 * Lab9 methods class. Note, all parameters must be final.
 */
public class CSCD210Lab9Methods {

    /**
    * 
    * The printMenu method prompts the user for a menu choice.<br>
    * 
    * This method returns an integer<br>
    * If input other than an integer is entered, the program will not crash. 
    * Instead it will handle the exception gracefully and prompt the user to enter an integer. 
    * If the user enters an integer outside of the valid range, the menu is reprompted from main.
    * <br>
    * Menu choices are:
    * <br>
    * <br>1) Enter a file name
    * <br>2) Print the file properties
    * <br>3) Print the file contents
    * <br>4) Write to a file
    * <br>5) Quit
    * 
    *
    * <br><br>Note: The input buffer will be left cleared before leaving the method
    *
    * @param kb Representing the Scanner to the keyboard
    * @param fileName Representing the name of the file
    * @return int Representing the menu choice chosen
    * @throws IllegalArgumentException if the Scanner is null
    * @throws Exception part of the method signature - if an exception occurs inside the body of this method it is thrown up the call stack
    */
    public static int printMenu(final Scanner kb, final String fileName) throws Exception{

        if(kb == null){
            throw new IllegalArgumentException();
        }

        String menu =   "\n+------------------------------+\n" +
                          "|         File IO Menu         |\n" +
                          "+------------------------------+\n" +
                          "| 1) Enter a file name         |\n" +
                          "| 2) Print the file properties |\n" +
                          "| 3) Print the file contents   |\n" +
                          "| 4) Write to a file           |\n" +
                          "| 5) Quit                      |\n" +
                          "+------------------------------+\n" +
                          "+ Current File: [" + fileName + "]\n" +
                          "Make your selection >>";

        int choice = 0;
        boolean continueInput = true;
        
        do{

            try {

                //attempt to get an integer from the user
                System.out.print(menu);
                choice = kb.nextInt();

                //indicate we have successfully received an integer
                continueInput = false;
            
            } catch (Exception e) {

                //print the exception message to the user
                System.out.println("Try again. (Incorrect input: an integer is required)");
 
            } finally{

                //clear the input buffer
                kb.nextLine();

            }

        }while(continueInput);

        return choice;
    }

    /**
    * The readFileName method asks the user to enter a file name.
    * This represents the currently selected file.
    * 
    * 
    * <br><br>Note: The input buffer will be left cleared before leaving the method
    *
    * @param kb Representing the Scanner to the keyboard
    * @param fileName Representing the name of the current file
    * @return String representing the user-selected file name
    * @throws IllegalArgumentException if the Scanner is null
    * @throws Exception part of the method signature - if an exception occurs inside the body of this method it is thrown up the call stack
    */
    public static String readFileName(final Scanner kb, final String fileName) throws Exception{
    
        if(kb == null){
            throw new IllegalArgumentException();
        }

        String prompt =   "\n+------------------------------+\n" +
                            "|        Read File Name        |\n" +
                            "+------------------------------+\n" +
                            "+ Current File: [" + fileName + "]\n";

        System.out.print(prompt + "Enter a file name>>");

        String str = kb.next();

        System.out.println("You entered: " + str);

        kb.nextLine();

        return str;
    
    }

    /**
    * The fileProperties method prints details about the currently selected file.<br>
    * Properties include: if the file already exists, size (bytes), is readable / writable, 
    * if it is a file or directory, if it's hidden, the absolute path, and last modified time.
    * 
    * @param fileName Representing the name of the current file
    * @throws IllegalArgumentException if the fileName is null. Note: throws this exception if the String object is null, not if the fileName is named "null"
    * @throws Exception part of the method signature - if an exception occurs inside the body of this method it is thrown up the call stack
    */
    public static void fileProperties(String fileName) throws Exception{

        if(fileName == null){
            throw new IllegalArgumentException();
        }

        String prompt =   "\n+------------------------------+\n" +
                            "|        File Properties       |\n" +
                            "+------------------------------+\n" +
                            "+ Current File: [" + fileName + "]\n";

        System.out.println(prompt);

        File file = new File(fileName);

        System.out.println("Does it exist? " + file.exists());
        System.out.println("The file has " + file.length() + " bytes");
        System.out.println("Can it be read? " + file.canRead());
        System.out.println("Can it be written? " + file.canWrite());
        System.out.println("Is it a directory? " + file.isDirectory());
        System.out.println("Is it a file? " + file.isFile());
        System.out.println("Is it hidden? " + file.isHidden());
        System.out.println("Absolute path is " + file.getAbsolutePath());
        System.out.println("Last modified on " + new java.util.Date(file.lastModified()));

    }

    /**
    * The printFileContents method prints the text from the currently selected file.<br>
    * This method will print a line of '#' symbols, then print the contents of the selected file,
    * then print another line of '#'. The new lines in the file will be preserved in the print out.
    *
    * @param fileName Representing the name of the current file
    * @throws IllegalArgumentException if the fileName is null. Note: throws this exception if the String object is null, not if the fileName is named "null"
    * @throws Exception part of the method signature - if an exception occurs inside the body of this method it is thrown up the call stack
    */
    public static void printFileContents(String fileName) throws Exception{

        if(fileName == null){
            throw new IllegalArgumentException();
        }

        String prompt =   "\n+------------------------------+\n" +
                            "|        File Contents         |\n" +
                            "+------------------------------+\n" +
                            "+ Current File: [" + fileName + "]\n";

        System.out.println(prompt);

        File file = new File(fileName);

        Scanner input = new Scanner(file);
        
        System.out.println("################################");

        while(input.hasNext()){
            System.out.println(input.nextLine());
        }

        System.out.println("################################");

        input.close();

    }

    /**
    * The writeToFile method will write text to the currently selected file.<br>
    * It will first check if the currently selected file exists or not. 
    * If it already exists, ask the user if they want to overwrite the file and continue,
    * otherwise the method doesn't do anything and the menu is printed again from main.<br>
    * <br>
    * The user will continully enter Strings until the stopword "STOP" is given on it's own line.
    * The Strings entered by the user will be written to the current file with their line formats intact.
    * 
    * <br><br>Note: The input buffer will be left cleared before leaving the method
    *
    * @param fileName Representing the name of the current file
    * @param kb Representing the Scanner to the keyboard
    * @throws IllegalArgumentException if the fileName is null. Note: throws this exception if the String object is null, not if the fileName is named "null"
    * @throws Exception part of the method signature - if an exception occurs inside the body of this method it is thrown up the call stack
    */
    public static void writeToFile(final String fileName, Scanner kb) throws Exception{

        if(fileName == null){
            throw new IllegalArgumentException();
        }

        String prompt =   "\n+------------------------------+\n" +
                            "|        Write to a file       |\n" +
                            "+------------------------------+\n" +
                            "+ Current File: [" + fileName + "]\n";

        System.out.print(prompt);

        File file = new File(fileName);
        
        boolean proceed = false;

        if(file.exists()){

            boolean loop = true;
            int choice = 0;

            do{
                try {
                    System.out.println("\n[WARNING]\nFile already exists. Do you wish to replace \"" + fileName + "\"?\n1 - yes\n2 - no");
                    System.out.print("Make your selection >>");
                    
                    choice = kb.nextInt();
                    System.out.println();

                    if(choice == 1 || choice == 2){
                        loop = false;
                        
                    }
                } catch (Exception e) {
                    System.out.println("please enter an integer");
                } finally{
                    kb.nextLine();
                }
                


            }while(loop);

            if(choice == 1){
                proceed = true;
            }

        }

        if(proceed || !file.exists()){
            PrintWriter output = new PrintWriter(file);
            System.out.println("Enter text to write to a file.\nEach press of [Enter] will signify a new line to be written.\nEnter \"STOP\" on a new line to stop writing.");

            //if(kb.hasNext()){
                
            
            System.out.print(">>");
            String text = kb.nextLine();
            while(!text.equals("STOP")){
                
                System.out.print(">>");
                output.println(text);
                text = kb.nextLine();

            }

            output.close();
        }

    }
    
}
