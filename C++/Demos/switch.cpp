/*  Author: Jo Crandall
    CPSC 121 Conditionals - Switch Statements (Example 9)
    Sept 22, 2021
    Gonzaga University
    This program demonstrates switch statements and local scope.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    /// the switch statement is a similar structure to if, else if, else, but can help to streamline some cases

    int flavor;
    string userTemp;
    int punches;
    //string flavorStr = "Chocolate";

    flavor = 1;    /// try flavor = 2 or flavor = 3
    switch (flavor){
        case 1: cout << "Vanilla\n";       //break takes us out of the switch statement once we have found the relevant case and completed instructions
        case 2: cout << "hiChocolate\n";      //without the break command, we "fall through" the switch statement, hitting every following case til a break or the end
    }
    /*switch (flavorStr){      /// note that switch statements can only take integer types
        case "Vanilla": cout << "Vanilla\n"; break;
        case "Chocolate": cout << "Chocolate\n";
    }*/

    /// The cases can only cover so much ground, so we also have a default to act as our "else"
    /*switch (flavor){
        case 1: cout << "Vanilla\n"; break;  //break takes us out of the switch statement once we have found the relevant case and completed instructions
        case 2: cout << "Chocolate\n"; break;
        default: cout << "We only have vanilla or chocolate.\n";
    }*/

    /// We can put as many instructions as we want inside each case
    
    /*switch (flavor){
        case 1: ///1=vanilla
            cout << "Hot or iced? ";
            cin >> userTemp;
            if (userTemp == "hot"){
                cout << "We only have iced.\n";
            }
            break;
        case 2: ///2=chocolate
            cout << "Hot or iced? ";
            cin >> userTemp;
            if (userTemp == "hot"){
                cout << "Coming right up!\n";
            }
            break;
        default:
            cout << "We only have vanilla or chocolate.\n";
    }*/

   
    /// we can CAREFULLY omit the break command to intentionally fall through the switch statement all or part of the way
    punches = 10;

    /*switch (punches){
        case 10: cout << "You get $.50 off!\n";     
        case 5: cout << "You get free sprinkles!\n"; break;
        case 2: cout << "You have two punches...that's something...\n"; break;
        default: cout << "Would you like a punch card?\n";
    }*/

    /// note that switch DOES NOT work for comparison expressions!
    /*switch (punches){
        case punches > 5: cout << "More than five punches\n";
    }*/

    /// LOCAL (BLOCK) SCOPE - variables declared in a block are scoped to that block
    /// Here we are declaring a variable inside an if statement, so it is only defined inside the if statement
    /*if (punches > 5){
        int remaining = 10 - punches;
        cout << "You only need " << remaining << " more punches!" << endl;
    }*/
    //cout << remaining << endl;

    /// Here we are trying to declare a variable inside a switch statement...
    /*switch (punches){
        case 10:
            bool reward = true; cout << reward << endl; break;
        //case 9:
            //reward = false; cout << reward << endl; break;
        //default:
            //cout << "Just keep getting punches\n";
    }*/
    //cout << reward << endl;

    /// How about a switch inside a switch?
    /*switch (flavor){
        case 1:
            switch (punches){
                case 10:
                    cout << "vanilla with 10 punches\n"; break;
                case 5:
                    cout << "vanilla with 5 punches\n";
            }
            break;
        case 2:
            switch (punches){
                case 10:
                    cout << "chocolate with 10 punches\n"; break;
                case 5:
                    cout << "chocolate with 5 punches\n";
            }
            break;
        default:
            cout << "we only have vanilla or chocolate\n";
    }*/



    return 0;
}