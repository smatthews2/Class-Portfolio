/// This is the main file for Programming Assignment 6: MVP
/// You will need to ADD to this file

#include "mvp.h"

int main(){

    extern double currentTeam[12]; /// 'extern' tells the compiler that this array has been declared in another .cpp file, and to go look for it.
    int x;

    cout << "Please input a team number (1-10).\n";
    cin >> x;
    loadTeam(x, currentTeam);
    if (x <= 10 && x > 0){
        cout << "Here are the scores for team " << x << ":" << endl;
        for (int i = 0; i < 12; i++){
            cout << currentTeam[i] << ' ';
        }
        cout << endl;
        cout << "The average score for this team is: " << computeAvgScore(currentTeam) << endl;
        determineHighScore(currentTeam);
        computeOverallHighScore(currentTeam);
        determineOverallHighScore(currentTeam);   
    }
    else{
        cout << "Error: " << x << " is not a valid team number.\n";
    }

    return 0;
}

