/*  Author: Sebastian Matthews
    CPSC Participation #2
    Gonzaga University
    This program is for a grade in-class.
*/

#include <iostream>
using namespace std;

int main(){
    
    // All variables declared upfront.
    const double GRADE_A = 90, GRADE_B = 80, GRADE_C = 70, GRADE_D = 60;
    double userGrade;

    // Ask user for their grade.
    cout << "Input grade." << endl;
    cin >> userGrade;

    // This "if" chain checks where grades land depending on their given thresholds.
    if(userGrade >= GRADE_A){
        cout << "You got an A! YAY!" << endl;
    }
    else if(userGrade >= GRADE_B){
        cout << "You got a B! Woo!" << endl;
    }
    else if(userGrade >= GRADE_C){
        cout << "You got a C! Yeah!" << endl;
    }
    else if(userGrade >= GRADE_D){
        cout << "You got a D! Dang!" << endl;
    }
    else{
        cout << "You got an F! Yikes!" << endl;
    }
    return 0;
}