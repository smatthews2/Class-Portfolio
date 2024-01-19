/*  Author: Jo Crandall
    CPSC 121 Function Basics 5 (Example 20)
    Oct 13, 2021
    Gonzaga University
    This program demonstrates default arguments, pass by value, pass by reference.
*/

#include <iostream>
using namespace std;

/// default arguments should be used right away in the function prototype (or function header if no prototype)
/// if the function is called without arguments, these values will automatically be used
double tuitionCost(int credits = 15, bool inState = false);
void changeMyInt(int &);    /// This function is set up for pass by REFERENCE
void keepMyInt(int);        /// This functino is set up for pass by VALUE

int main(){

    int myOrigInt = 42;

    /// We will call the tuitionCost() function with no args, 1 arg (each type), and 2 args.
    cout << tuitionCost() << endl;
    //cout << tuitionCost(true) << endl;
    //cout << tuitionCost(4) << endl;
    //cout << tuitionCost(4, true) << endl;
    /// Note that we can only violate the expected number of args this way when default arguments are specified!

    /// Up to this point we have sent arguments to functions using PASS BY VALUE.
    /// Doing this meant that we passed the VALUE of a variable and used it, but did not change the original value outside the function.
    /// If we PASS BY REFERENCE (use a reference variable) we CAN change the value of the original variable outside the function:

    /// Let's try comparing pass by value and pass by reference.
    /// Here we pass the VALUE of myOrigInt into the function:
    //cout << myOrigInt << endl;
    //keepMyInt(myOrigInt);
    //cout << myOrigInt << endl;
    //keepMyInt(myOrigInt);
    //cout << myOrigInt << endl;

    /// Here we pass a REFERENCE to myOrigInt (also known as an alias) 
    //cout << myOrigInt << endl;
    //changeMyInt(myOrigInt);
    //cout << myOrigInt << endl;
    //changeMyInt(myOrigInt);
    //cout << myOrigInt << endl;
    //changeMyInt(myOrigInt);
    //cout << myOrigInt << endl;
    


    return 0;
}

/*This function computes the cost of tuition.
* Arguments: number of credits as integer - if no arg passed, credits = 15
*            inState status as bool - if no arg passed, inState = false
* Return: cost of tuition as double
* Assumptions: Number of credits is fifteen or fewer. 
*/
double tuitionCost(int credits, bool inState){
    if (inState){
        return credits * 500;
    }
    else return credits * 650;
}

//This function will change the value (outside this function) of the variable that is passed by reference.
void changeMyInt(int & refInput){
    refInput += 1;
}

/// This function will NOT change the value (outside the function) of the variable that is passed by value.
void keepMyInt(int valInput){
    valInput += 1;
}