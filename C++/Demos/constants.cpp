/*  Author: Jo Crandall
    CPSC 121 Constants & Conditionals (Example 8)
    Sept 17, 2021
    Gonzaga University
    This program demonstrates the use of const for an area and volume calculation program.
*/

/// another way to declare global constants, especially if you are working with multiple .cpp files
//#ifndef MY_VALUE
//#define MY_VALUE 100
//#endif

#include <iostream>
//#include <iomanip>   /// setprecision()
#include <cmath>  /// pow()
using namespace std;

int main(){

    /// constants can be used to set a particular value that will be accessed multiple times
    /// that way, if the value changes, you only need to change it in one place in your code
    const double MY_PI = 3.15;

    /// the const type cannot be modified
    //MY_PI += .01;

    /// declare variables for radius, area, and volume
    double inRadius, myArea, myVolume;

    /// get a radius from the user
    cout << "Enter radius: ";
    cin >> inRadius;

    /// compute area
    if (inRadius > 0){
        myArea = MY_PI * inRadius * inRadius;
        cout << "The area of a circle with that radius is: " << myArea << endl;
    }
    else if (inRadius == 0){
        cout << "Radius must be nonzero" << endl;
    }
    else{  /// notice that the trailing else can serve as error-catcher
        cout << "invalid radius" << endl;
    }

    /// compute volume
    if (inRadius > 0){
        myVolume = 4 / 3 * MY_PI * pow(inRadius, 3);
        cout << "The volume of a sphere with that radius is: " << myVolume << endl;
    }
    else if (inRadius == 0){
        cout << "Radius must be nonzero" << endl;
    }
    else{  
        cout << "invalid radius" << endl;
    }

    /// How else could we structure this???

    //myPi = 3.15;
    //cout << MY_VALUE << endl;

    return 0;
}