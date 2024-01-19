/*  Author: Jo Crandall
    CPSC 121 Math Operations (Example 4)
    Sept 13, 2021
    Gonzaga University
    This program explores examples of mathematical operations with various data types.
*/

#include <iostream>
#include <cmath>    ///pow()
using namespace std;

int main(){
    
    /// math with integers
    int intA = 10;
    int intB = 23;
    int intC = intA + intB;
    cout << intC << endl;
    cout << intA * intB << endl;
    cout << intA / intB << endl;

    /// math with floating point
    double dblA = 10;
    double dblB = 23;
    double dblC = dblA + dblB;
    //cout << dblC << endl;
    //cout << dblA * dblB << endl;
    //cout << dblA / dblB << endl;


    /// math with multiple types
    //cout << intA + dblA << endl;
    //cout << intA / dblB << endl;


    /// raise to a power
    double dblD = pow (2,2);
    //cout << dblD << endl;

    /// modulus
    int intD = 27;
    //cout << intD % 3 << endl;
    //cout << intD % 4 << endl;
    //cout << intD % 5 << endl;
    //cout << intD % 6 << endl;
    //cout << dblB % 6 << endl;
    
    return 0;
}