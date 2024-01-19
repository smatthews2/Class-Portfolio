/*  Author: Sebastian Matthews
    CPSC PA2: Codenames
    Sept 15, 2021
    Gonzaga University
    This program checks whether a user has valid credentials by having them enter one of five codenames, then the appropriate code number.
    Note: the codenames are Utah, Omaha, Gold, Juno, and Sword. The code number is 55.
*/

#include <iostream>
using namespace std;

int main(){
    
    // All declared variables needed for program are at the start of the code.
    string codeName;
    int codeNumber, amountOfGuesses = 0;

    // Introductory statement, followed by user input.
    cout << "Hello, stranger."<< endl;
    cout << "Enter a codename." << endl; 
    cin >> codeName;

    // The "if" below checks whether or not the inputted codename matches any of the five provided.
        // If it's true, it'll ask the user for the code number and "generate"(add 5 and multiply it by 7) a new one.
        //If it's false, the program will mark the number of tries and end when those tries are exceeded.
    if(codeName == "Utah" || codeName == "Omaha" || codeName == "Gold" || codeName == "Juno" || codeName == "Sword"){
            
            cout << "Good to see you again, " << codeName << "." << endl;
            cout << "One more thing, " << codeName << "..." << endl;
            cout << "What's the passcode?" << endl;
            cin >> codeNumber;
            
            if(codeNumber == 55){
                
                cout << "Correct! Identity confirmed!" << endl;
                cout << "Generating new key..." << endl;
                codeNumber += 5, codeNumber *= 7;
                cout << "Your new key is " << codeNumber << "." << endl;

            }
            else{
                
                cout << "Incorrect!" << endl;

            }

        }    
    else{
        
        cout << "Invalid codename." << endl; 
        amountOfGuesses = amountOfGuesses + 1;
        cout << "You have " << 3 - amountOfGuesses << " guesses remaining." << endl;
        cin >> codeName;
        
        if(codeName == "Utah" || codeName == "Omaha" || codeName == "Gold" || codeName == "Juno" || codeName == "Sword"){
            
            cout << "Good to see you again, " << codeName << "." << endl;
            cout << "One more thing, " << codeName << "..." << endl;
            cout << "What's the passcode?" << endl;
            cin >> codeNumber;
            
            if(codeNumber == 55){
                
                cout << "Correct! Identity confirmed!" << endl;
                cout << "Generating new key..." << endl;
                codeNumber += 5, codeNumber *= 7;
                cout << "Your new key is " << codeNumber << "." << endl;

            }
            else{
                
                cout << "Incorrect!" << endl;

            }

        }
        else{
            
            cout << "Invalid codename." << endl; 
            amountOfGuesses = amountOfGuesses + 1;
            cout << "You have " << 3 - amountOfGuesses << " guesses remaining." << endl;
            cin >> codeName;
            
            if(codeName == "Utah" || codeName == "Omaha" || codeName == "Gold" || codeName == "Juno" || codeName == "Sword"){
                
                cout << "Good to see you again, " << codeName << "." << endl;
                cout << "One more thing, " << codeName << "..." << endl;
                cout << "What's the passcode?" << endl;
                cin >> codeNumber;
                
                if(codeNumber == 55){
                    
                    cout << "Correct! Identity confirmed!" << endl;
                    cout << "Generating new key..." << endl;
                    codeNumber += 5, codeNumber *= 7;
                    cout << "Your new key is " << codeNumber << "." << endl;
                
                }
                else{
                    
                    cout << "Incorrect!" << endl;
                
                }
            }
            else{
                
                cout << "Invalid codename." << endl; 
                amountOfGuesses = amountOfGuesses + 1;
                cout << "You have " << 3 - amountOfGuesses << " guesses remaining." << endl;
                cin >> codeName;
                
                if(codeName == "Utah" || codeName == "Omaha" || codeName == "Gold" || codeName == "Juno" || codeName == "Sword"){
                    
                    cout << "Good to see you again, " << codeName << "." << endl;
                    cout << "One more thing, " << codeName << "..." << endl;
                    cout << "What's the passcode?" << endl;
                    cin >> codeNumber;
                    
                    if(codeNumber == 55){
                        
                        cout << "Correct! Identity confirmed!" << endl;
                        cout << "Generating new key..." << endl;
                        codeNumber += 5, codeNumber *= 7;
                        cout << "Your new key is " << codeNumber << "." << endl;
                    
                    }
                    else{
                        
                        cout << "Incorrect!" << endl;

                    }    
                }
                else{
                    
                    cout << "You have reached the maximum amount of guesses. Restarting..." << endl;
                    return 0;

                }

            }
            
            }     
        }
    }
