/*  Author: Jo Crandall
    CPSC 121 If Statments (Example 6)
    Sept 15, 2021
    Gonzaga University
    This program demonstrates the if and if/else statements.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    /// if statements
    /// body is only executed if the condition is true

    if (3 < 4){
        cout << "3 is less than 4!" << endl;
    }
    if (4 < 3){
        cout << "4 is less than 3!" << endl;
    }

    /// other style options for brief/single statements...but multiple statements MUST be enclosed in braces

    //if (3 < 4) cout << "3 is less than 4!" << endl;
    //if (3 < 4) 
        //cout << "3 is less than 4!" << endl;

    /// more bools
    if (true){
        //cout << "It is true!" << endl;
    }  
    if (1){
        //cout << "It is still true!" << endl;
    }
    if (false){
        //cout << "Say it ain't so!" << endl;
    } 
    if (0){
        //cout << "It is not true!" << endl;
    }
    if (42){
        //cout << "Is it true?" << endl;
    } 
    if (-1){
        //cout << "Apparently negatives are also true." << endl;
    }

    /// nested ifs
    int x = 5;
    if (x < 100){
        //cout << "under 100... ";
        if (x < 50){
            //cout << "under 50... ";
            if (x < 10){
                //cout << "under 10... ";
                if (x < 5){
                    //cout << "under 5!!" << endl;
                }
            }
        }
    }
    //cout << endl;

    /// if followed by else
    //string myString = "banana";
    string myString = "aaaple";
    if (myString == "banana"){
        //cout << "have banana" << endl;
    }
    else{ /// so myString != banana
        //cout << "no banana so sad" << endl;
    }

    /// notice that other comparison operators can be used with strings as well
    if (myString > "apple"){
        //cout << myString << " greater than apple" << endl;
    }
    else {
        //cout << myString << " not greater than apple" << endl;
    }

    return 0;
}