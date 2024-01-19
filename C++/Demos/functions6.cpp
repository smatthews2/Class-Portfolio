/*  Author: Jo Crandall
    CPSC 121 Function Basics 6 (Example 21)
    Oct 15, 2021
    Gonzaga University
    This program demonstrates function stubs.
*/

#include <iostream>
using namespace std;

/// Function prototypes
void computeAnnualDues(int, bool);
void computeTaxDeduction(double);
void determineEligibility(int, double);


int main(){

    /// Function stubs are 'skinny' versions of the function to replace the actual function
    /// Using stubs while developing and/or testing complex programs allows you to concentrate on the broad program flow

    computeAnnualDues(5, true);
    
    computeTaxDeduction(1205.50);
   
    determineEligibility(4, false);
   

    return 0;
}

/*This function computes annual dues.
* Input: years of membership as int, whether paying entire year in advace as bool.
* TARGET Output: annual years as double */
void computeAnnualDues(int years, bool payInAdvance){
    //This is just a function STUB, so it will just print a message to let the program know it ran successfully.
    cout << "computeAnnualDues function was called with args: years = " << years << " and payInAdvance = " << payInAdvance << endl;
}

/*This function computes tax deduction.
* Input: donation amount as double.
* TARGET Output: tax deduction as double */
void computeTaxDeduction(double donation){
    cout << "computeTaxDeduction function was called with arg: donation = " << donation << endl;
}

/*This function determines eligibility.
* Input: years of membership as int, donation amount as double.
* TARGET Output: eligibility as bool */
void determineEligibility(int years, double donation){
    cout << "determineEligibility function was called with args: years = " << years << " and donation = " << donation << endl;
}


/// or I could write each of these to return a pre-determined value...