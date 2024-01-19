/*  Author: Sebastian Matthews
    CPSC PA3: Quadratic Inequalities
    October 6, 2021
    Gonzaga University
    This program randomly generates a quadratic inequality and then takes a user input/answer and decides whether that input solves the inequality. 
    The program then prints a message to the user that their value is/is not a solution.
    If the user does not enter the correct answer, then the program will provide a couple of hints to the user about how to try to solve it.
*/

#include <iostream>
using namespace std;

int main(){
    
    // Assigned all variables upfront.
    int a, b, c, x, numberOfTries, solutionAttempt;
    bool randomSign, randomInequality;
    char wantHint;

    // Generate a random seed for the rand() function based on the computer's clock.
    unsigned seed = time(0);
    srand(seed);

    // Calculate values for inequality.
    a = 1 + rand() % 5;
    b = rand() % 21;
    c = rand() % 21;
    randomSign = rand() % 2;
    randomInequality = rand() % 2;
    
    // Determine operators and inequality symbols, along with asking for user input.
    switch(randomSign){
        case 0: 
            cout << a << "x^2 - " << b;
            switch(randomInequality){
                case 0: 
                    
                    // a x^2 - b < c
                    cout << " < " << c << endl;    
                    cout << "Please enter a value for x that solves the inequality." << endl; 
                    
                    // Gives the user three guesses at solving the inequality(I'm trying to redeem myself).
                    for(numberOfTries = 3; numberOfTries >= 0; numberOfTries--){
                    
                        cin >> x;
                        solutionAttempt = (a * (x * x)) - b;
                    
                        if(solutionAttempt < c){
                            
                            // Once the user guesses correctly, the program ends.
                            cout << "Correct! " << solutionAttempt << " is" << " < " << c << "." << endl;
                            return 0;
                    
                        }
                        else if(numberOfTries == 0){
                            
                            // End the program once the guess amount is exceeded. 
                            cout << "Incorrect! Number of tries exceeded." << endl;
                            return 0;

                        }
                        else{
                            
                            // Tells user remaining tries, along with offering a hint if desired.
                            cout << "Incorrect! You have " << numberOfTries << " tries remaining." << endl;
                            cout << "Would you like a hint? [Y/N]" << endl;
                            cin >> wantHint;
                    
                            if(wantHint == 'Y'){
                                cout << "Have you tried adding " << b << " to both sides?" << endl;
                            }
                    
                        }
                    }
                    break;    
                case 1: 
                    
                    // a x^2 - b > c
                    cout << " > " << c << endl;
                    cout << "Please enter a value for x that solves the inequality." << endl; 
                    
                    for(numberOfTries = 3; numberOfTries >= 0; numberOfTries--){    
                    
                        cin >> x;
                        solutionAttempt = (a * (x * x)) - b;
                    
                        if(solutionAttempt > c){
                    
                            cout << "Correct! " << solutionAttempt << " is" << " > " << c << "." << endl;
                            return 0;
                    
                        }
                        else if(numberOfTries == 0){
                            
                            cout << "Incorrect! Number of tries exceeded." << endl;
                            return 0;
                            
                        }
                        else{
                    
                            cout << "Incorrect! You have " << numberOfTries << " tries remaining." << endl;
                            cout << "Would you like a hint? [Y/N]" << endl;
                            cin >> wantHint;
                    
                            if(wantHint == 'Y'){
                                cout << "Have you tried adding " << b << " to both sides?" << endl;
                            }
                        }
                    }
                    break;     
            }
        case 1: 
            cout << a << "x^2 + " << b;
            switch(randomInequality){
                case 0: 
                        
                        // a x^2 + b < c
                        cout << " < " << c << endl;
                        cout << "Please enter a value for x that solves the inequality." << endl;
                    
                        for(numberOfTries = 3; numberOfTries >= 0; numberOfTries--){
                    
                            cin >> x;
                            solutionAttempt = (a * (x * x)) + b;
                    
                            if(solutionAttempt < c){
                                
                                cout << "Correct! " << solutionAttempt << " is" << " < " << c << "." << endl;
                                return 0;

                            }
                            else if(numberOfTries == 0){
                            
                                cout << "Incorrect! Number of tries exceeded." << endl;
                                return 0;
                            
                            }
                            else{
                                
                                cout << "Incorrect! You have " << numberOfTries << " tries remaining." << endl;
                                cout << "Would you like a hint? [Y/N]" << endl;
                                cin >> wantHint;
                                if(wantHint == 'Y'){
                                    cout << "Have you tried subtracting " << b << " from both sides?" << endl;
                                }

                            }   

                        }
                    break;      
                case 1: 
                    
                    // a x^2 + b > c
                    cout << " > " << c << endl; 
                    cout << "Please enter a value for x that solves the inequality." << endl;
                    
                    for(numberOfTries = 3; numberOfTries >= 0; numberOfTries--){
                        
                        cin >> x;
                        solutionAttempt = (a * (x * x)) + b;

                        if(solutionAttempt > c){
                            
                            cout << "Correct! " << solutionAttempt << " is" << " > " << c << "." << endl;
                            return 0;
                        
                        }
                        else if(numberOfTries == 0){
                            
                            cout << "Incorrect! Number of tries exceeded." << endl;
                            return 0;
                            
                        }
                        else{
                            
                            cout << "Incorrect! You have " << numberOfTries << " tries remaining." << endl;
                            cout << "Would you like a hint? [Y/N]" << endl;
                            cin >> wantHint;
                            if(wantHint == 'Y'){
                            cout << "Have you tried subtracting " << b << " from both sides?" << endl;
                            }
                        }
                    }
                    break;
            }        
    }
}