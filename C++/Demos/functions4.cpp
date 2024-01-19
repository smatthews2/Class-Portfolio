/*  Author: Jo Crandall
    CPSC 121 Function Basics 4 (Example 19)
    Oct 13, 2021
    Gonzaga University
    This program demonstrates overloading functions.
*/

#include <iostream>
using namespace std;

/// declare functions
double tuitionCost(int credits, bool inState);    /// notice that all three have SAME FUNCTION NAME
double tuitionCost(bool inState);                 /// This is an example of OVERLOADED functions
void tuitionCost(void);                           /// There are multiple versions to handle different argument types

/// declare global constants
const double INSTATE = 500;    /// the in-state cost per credit
const double OUTSTATE = 650;

int main(){

    /// There are many times when we want to use the same essential function (or similar function) but with different args
    /// Overloading functions can allow us to re-use the same function name in logical ways

    /// Display a menu for the user to indicate whether they are in-state or out-of-state, and how many credits......

    /// Call the appropriate version of the function......

    cout << "Tuition is: " << tuitionCost(true) << endl;        /// here I am calling the function with only a bool
    //cout << "Tuition is: " << tuitionCost(10, false) << endl;    /// here I am calling the function with an int and a bool
    //tuitionCost();                              /// here I am calling the functin with no args

    return 0;
}

/// Note that as we write functions, we need to write a mini comment block for each function definition...

/*This function computes the cost of tuition.
* Arguments: number of credits as integer, inState status as bool
* Return: cost of tuition as double
* Assumptions: Number of credits is fifteen or fewer. 
*/
double tuitionCost(int credits, bool inState){
    if (inState){
        return credits * INSTATE;
    }
    else return credits * OUTSTATE;
}

/*This function computes the cost of tuition.
* Argumentt: inState status as bool
* Return: cost of tuition as double
* Assumptions: Number of credits is above fifteen. 
*/
double tuitionCost(bool inState){
    if (inState){
        return 16 * 500;
    }
    else return 16 * 650;
}

/*This function reports average cost of tuition.
* Arguments: none
* Return: none
*/
void tuitionCost(void){
    cout << "Average tuition cost is: " << 15 * 500 << endl;
}