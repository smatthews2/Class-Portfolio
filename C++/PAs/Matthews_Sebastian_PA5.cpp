/* Author: Sebastian Matthews
    CPSC PA5: Prelude to Free-throw
    October 14, 2021
    Gonzaga University
    This program will present options to a user with a menu structure and call different functions depending on their input. 
    The menu is perpetual until the user selects an option to exit the program. 
    The user inputs values to reach a target, and can keep trying to reach said target by inputting new angles and/or velocities.
    Once the user hits the target, the program congratulates them.
*/

#include <iostream>
#include <cmath> // For mathematical functions(sine, cosine, etc.).

using namespace std;

// Declare variables and functions upfront.
float throwBall(int angle, int velocity);
int targetLocation(int& throwAttempt);
bool targetReached(float horizontal_final);
bool displayMenu(void);
const float g = -9.8;
int throwValues[3] = {0,0};
static int throwAttempt = 0;

// Run the program in main().
int main(){
    bool keepThrowing = true;
    while(keepThrowing){
        if (displayMenu() == false){
            keepThrowing = false;
        }  
    }
    
}

// The function "targetReached" will calculate whether or not the target was hit with the user's inputted values.
bool targetReached(float horizontal_final){
    if(horizontal_final <= targetLocation(throwAttempt) + 20 && horizontal_final >= targetLocation(throwAttempt) - 20){
        cout << "Target hit! You win!\n";
        return true;
    }
    else{
        cout << "You are " << targetLocation(throwAttempt) - horizontal_final << " meters off.\n";
        return false;    
    }
    return true;
}

// The function "targetLocation" will set the target 100-1000 meters away.
int targetLocation(int& throwAttempt){
    int targetLocation; 
    unsigned seed = time(0);
    srand(seed);
    if(throwAttempt < 1){
        targetLocation = 100 + rand() % 901;
        throwAttempt++;
    }
    else{
        targetLocation = throwValues[3];
    }
    throwValues[3] = targetLocation;
    return throwValues[3];
}

// The function "throwball" will calculate the ball's trajectory given the user's chosen angle and velocity.
float throwBall(int angle, int velocity){
    float horizontal_final, time_in_air;
    time_in_air = (-2/g) * (velocity * sin(angle));
    horizontal_final = (time_in_air) * (velocity * cos(angle));
    cout << "The ball traveled " << horizontal_final << " meters.\n";
    return horizontal_final;
}

// The function "displayMenu" will be the main way that the user will communicate to the program, allowing the user to:
// 1. Input angle and velocity for the ball.
// 2. Let the user close the menu, ending the program.
bool displayMenu(void){
    char userOption, secondUserOption;
    cout << "\t---Free-Throw Simulator---\n\n";
    cout << "The target is " << targetLocation(throwAttempt) << " meters away.\n\n";
    cout << "Please input the following letter(non-case sensitive) to commence said action: \n";
    cout << "\tA. Input Angle and Velocity(and make a Throw Attempt)\n" << "\tE. Exit Program\n";
    cin >> userOption;
    switch(userOption){
        case 'A':
        case 'a':
            int x, y, i;
            cout << "Current angle is " << throwValues[0] << " degrees.\n";
            cin >> x;
            throwValues[0] = x;
            cout << "Current velocity is " << throwValues[1] << " meters per second.\n";
            cin >> y;
            throwValues[1] = y;
            cout << "Would you like to make a throw attempt with the current values? [Y/N]\n";
            cin >> secondUserOption;
                if(secondUserOption == 'y' || secondUserOption == 'Y'){
                        cout << "Throw Attempt Results:" << endl;
                        if (targetReached(throwBall(throwValues[0],throwValues[1])) == true){
                            return false;
                        }
                        else{
                            return true;
                        }
                    }
                    else if(secondUserOption == 'n' || secondUserOption == 'N'){
                        return true;
                    }
                    else{
                        cout << "Cancelling throw attempt...\n";
                        return true;
                    }
            return true;
        case 'E':
        case 'e':
            cout << "Are you sure? [Y/N]\n";
            cin >> secondUserOption;
                if(secondUserOption == 'y' || secondUserOption == 'Y'){
                    cout << "Closing progam. Goodbye!\n";
                    return 0;
                }
                else if(secondUserOption == 'n' || secondUserOption == 'N'){
                    return true;
                }
                else{
                    cout << "Cancelling exit attempt...\n";
                    return true;
                }
    }
    return false;
}