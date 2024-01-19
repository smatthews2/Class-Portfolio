//Main file for PA7 Battleship!

#include "battleship.h"

int main()
{

    extern char field[10][10]; //extern means this variable has been declared in another .cpp file and the compiler should proceed
    extern char attempts[10][10];
    extern vector<int> attemptCoords;
    bool keepRunning = true;
    char beginGame;
    //introductory message
    system("clear");
    cout << "\n\n\tBattleship!\n\n";

    while (keepRunning)
    {
        system("clear");    
        printGrid(attempts);
        switch (displayMenu())
        {
        case 1:
            getCoordinates(attemptCoords);
            system("clear");
            checkField(attemptCoords);
            break;
        case 2:
            cout << "Game ended. Would you like to play again? (Y/N)\n";
            cin >> beginGame;
            if (beginGame == 'Y' || beginGame == 'y')
            {
                resetGrid(attempts);
                keepRunning = true;
            }
            else if (beginGame == 'N' || beginGame == 'n')
            {
                cout << "Closing program. Goodbye!\n";
                keepRunning = false;
                return 0;
            }
            break;
        }
        if (checkHits())
        {
            system("clear");
            printGrid(attempts);
            cout << "You win!\n";
            keepRunning = false;
        }
    }
}