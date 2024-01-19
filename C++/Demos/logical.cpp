/*  Author: Jo Crandall
    CPSC 121 More Conditionals (Example 8)
    Sept 20, 2021
    Gonzaga University
    This program demonstrates, user menu, logical expressions, and the conditional operator.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    /// Declare all variables up front in the program:
    int userOption;
    double userBal;
    string userType;
    int days;
    const double RATE30 = .005, RATE90 = .008;
    
    /// User Menu Example
    /// banking application - display user menu    
    /// notice formatting choices
    cout << "---Banking Application Options---\n\n";
    cout << "\t1. Deposit\n" << "\t2. Withdrawal\n" << "\t3. Check Balance\n" <<
        "\t4. ...\n\n" ;    
    cout << "Enter your choice:\n";
    /// What other options?   What will the user enter????
    cin >> userOption;
    if (userOption == 1){
        cout << "Let's make that deposit!" <<  endl;
    }


    /// Logical Expressions Example: we can combine logical expressions into compound conditional expressions
    /// banking application - check user account status
    userBal = 1200;
    userType = "Corporate";

    //if (userBal < 0 && userType != "Corporate")   cout << "Send negative balance notice.\n";
    //if (userBal < 5000 && userType == "Corporate")   cout << "Send low corporate account notice.\n";

    /// what takes operator precedence in this next one??
    //if (userBal < 25 && userType != "Corporate" || userBal < 5000 && userType == "Corporate")   cout << "Send Low Balance notice.\n";


    /// Conditional Operator Example
    /// banking application - apply account dividends
    days = 30;

    //days == 30 ? cout << "Dividends not due\n" : userBal += RATE90 * userBal;
    //days == 30 ? userBal += RATE30 * userBal : userBal += RATE90 * userBal;
    //cout << "New user balance: " << userBal << endl;

    /// another way to get a value from a conditional expression then assign it to the userBal variable
    //userBal += (days == 30) ? (RATE30 * userBal) : (RATE90 * userBal);
    //cout << "New user balance: " << userBal << endl;

    return 0;
}