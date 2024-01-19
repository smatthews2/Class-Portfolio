/*  Author: Jo Crandall
    CPSC 121 Else If Statments (Example 7)
    Sept 17, 2021
    Gonzaga University
    This program demonstrates the if - else if - else statements.
*/

#include <iostream>
using namespace std;

int main(){

    /// else if allows more than one condition to be tested
    int x = 34;
    if (x == 50){
        cout << "fifty! awesome!" << endl;
    }
    else if (x % 2 == 0){ /// x wasn't 50, testing to see if even
        cout << "at least it's even..." << endl;
    }
    else{ /// x is neither equal to 50 nor is it an even number
        cout << "I just give up then" << endl;
    }


    /// we can have as many else if conditionals as needed
    string myString = "zed";
    if (myString == "Jo"){
        cout << "I thought as much" << endl;
    }
    else if (myString == "Crandall"){
        cout << "You've got some explaining to do" << endl;
    }
    else if (myString == "Gina"){
        cout << "What a surprise" << endl;
    }
    else if (myString < "Zed"){
        cout << myString << " < Zed? I think not!" << endl;
    }
    else{
        cout << "Who are you again?" << endl;
    }
    return 0;
}