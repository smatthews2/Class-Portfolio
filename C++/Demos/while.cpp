/*  Author: Jo Crandall
    CPSC 121 Loops - while Loop (Example 11)
    Sept 27, 2021
    Gonzaga University
    This program demonstrates while loops, do-while loops, and sentinel values.
*/

#include <iostream>
using namespace std;

int main(){

    int trainingHours;
    int traineeTime;
    int trainingDay;
    
    /// The basic while loop structure:
    /// Lifeguard certification example:
    trainingHours = 15;
    while (trainingHours < 50){
        cout << 50 - trainingHours << " hour(s) still required for certification." << endl;
    }
    /// What's happening here? How can we fix it?

    /*while (trainingHours < 50){
        cout << 50 - trainingHours << " hour(s) still required for certification." << endl;
        trainingHours += 2;
    }*/    

    /// if we do not meet the condition, we never enter the while loop:
    trainingHours = 50;
    /*while (trainingHours < 50){
        cout << 50 - trainingHours << " hour(s) still required for certification." << endl;
        trainingHours += 2;
    }*/ 

    /// There are times we want to run through the loop at least once no matter what the value is
    /// The do-while structure will help with this:
    /*do{
        cout << 50 - trainingHours << " hour(s) still required for certification." << endl;
        trainingHours += 2;
    } while (trainingHours < 50);*/

    /// Notice that the while loop is a "pretest" loop, just like the for loop, whereas the do-while is a "posttest" loop

    /// You may also need a way to set up a loop that will just keep going forever (or until you unplug the machine...)
    /*while (true){
        cout << "Still going..." << ' ';
    }*/

    /// SENTINEL VALUES
    /// We can use a key value OR a value that we are sure is totally outside the range of a set of values to determine when to start or halt a loop
    
    trainingDay = 1;
    /*do{
        cout << "Enter your training hours: ";
        cin >> traineeTime;
        cout << "Day " << trainingDay++ << ": " << traineeTime << " hours\n";
    } while (traineeTime > -1 && traineeTime < 12);  */  //or try this with a running total of days  OR  a running total of hours  to stop

    return 0;
}