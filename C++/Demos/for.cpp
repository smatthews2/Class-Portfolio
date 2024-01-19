/*  Author: Jo Crandall
    CPSC 121 Loops - For Loop (Example 10)
    Sept 24, 2021
    Gonzaga University
    This program demonstrates for loops and increment/decrement operators.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    /// Declaration of variables:
    int count, myVal, myDoubleVal;

    /// A basic for-loop example
    /// We most often use INCREMENTING (++) to move through a loop:
    for (count = 0; count < 10; count++){
        cout << "The count is: " << count << endl;
    }
    cout << endl;
    
    /// We can also use DECREMENTING (--) to move through a loop:
    /*for (count = 10; count > -5; count--){
        cout << "The count is: " << count << endl;
    }*/

    /// Very often, you will declare your counter variable inside the for-loop arguments:
    /*for (int i = 0; i <= 5; i++){
        cout << i;
    }
    cout << endl;*/
    
    /// note that the counter variable declared in the loop is limited to block scope:
    //cout << i;

    /// We can increment/decrement in other ways too!
    /*for (int i = 0; i <= 12; i += 2){
        cout << i << "\t";
    }
    cout << endl;*/

    /// Why was it ok for us to redeclare int i again??!!

    /*for (int i = 1; i <= 1000; i *= 5){
        cout << i << "\t";
    }
    cout << endl;*/

    /// What would it look like if I wanted to subtract 3 every time?

    /// How about divide in half every time?

    /// Incrementers have postfix (i++) and prefix (++i) modes. Usually doesn't matter in simple cases like above.
    /// If more is happening with an increment/decrement expression, it WILL matter:
    /*myVal = 5;
    myDoubleVal = 2 * myVal++;
    cout << myVal << "\t" << myDoubleVal << endl;
    myVal = 5;
    myDoubleVal = 2 * ++myval;
    cout << myVal << "\t" << myDoubleVal << endl;*/

    /// incrementing in head of loop
    /*for (int i = 0; i < 5; ++i){
        cout << i << "\t";
    }
    cout << endl;*/

    /// incrementing in the body of the for loop:
    /*for (int i = 0; i < 5; ++i){
        cout << ++i << "\t";       //what's happening here??
    }
    cout << endl;*/

    return 0;
}