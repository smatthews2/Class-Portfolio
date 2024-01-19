/*  Author: Sebastian Matthews
    CPSC PA2: Codenames
    Sept 27, 2021
    Gonzaga University
    This program will ask for number of hours, add that to total hours, and print total hours until training hours pass 50.
*/

#include <iostream>
using namespace std;

int main(){
    
    int trainingHours = 0; // Declared all variables upfront.
    int totalHours = 0;

    do{  
        
        cout << "Enter training hours." << endl;
        cin >> trainingHours;
        totalHours += trainingHours; // Add user input to total.
        cout << 50 - totalHours << " hours still needed for certification." << endl;
        
    } while (totalHours < 50); //Stop loop when 50 hours is reached.
    return 0;
    
}