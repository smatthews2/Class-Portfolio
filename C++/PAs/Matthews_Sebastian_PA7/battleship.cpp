// Implementation file for PA7 Battleship!

#include "battleship.h"

vector<char> CarrierHits{'x', 'x', 'x', 'x', 'x'};
vector<char> battleshipHits{'x', 'x', 'x', 'x'};
vector<char> destroyerHits{'x', 'x'};
vector<char> cruiserHits{'x', 'x', 'x'};
vector<char> submarineHits{'x', 'x', 'x'};
vector<int> attemptCoords(2);

// The ships are deployed as shown. (You may create additional ship deployments if you wish.)
// This 2D array is NOT shown to the user.
char field[10][10] = {{'d', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                      {'d', '-', 'C', '-', '-', '-', '-', '-', '-', '-'},
                      {'-', '-', 'C', '-', '-', '-', '-', '-', '-', '-'},
                      {'-', '-', 'C', '-', '-', 'b', 'b', 'b', 'b', '-'},
                      {'-', '-', '-', '-', 'c', '-', '-', '-', '-', '-'},
                      {'-', '-', '-', '-', 'c', '-', '-', 's', 's', 's'},
                      {'-', '-', '-', '-', 'c', '-', '-', '-', '-', '-'},
                      {'-', '-', '-', '-', 'c', '-', '-', '-', '-', '-'},
                      {'-', '-', '-', '-', 'c', '-', '-', '-', '-', '-'},
                      {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};

// This is the 2D array of attempts that will be updated and shown to the user after each turn.
char attempts[10][10] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};

void printGrid(const char inArray[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        cout << "   ";
        for (j = 0; j < 10; j++)
        {
            cout << inArray[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int displayMenu()
{
    int x;
    cout << "1. Input Coordinates\n2. Quit\n";
    cin >> x;
    return x;
}

void getCoordinates(vector<int> &inVec)
{
    int x, y;
    cout << "State the row where you would like your hit attempt to be.\n";
    cin >> x;
    cout << "Now, state the column that you'd like your hit attempt to be.\n";
    cin >> y;
    inVec[0] = x;
    inVec[1] = y;
}

void checkField(vector<int> &inVec)
{
    int i;
    cout.flush();
    sleep(1);
    if (attempts[inVec[0]][inVec[1]] == '-' && field[inVec[0]][inVec[1]] == '-')
    {
        attempts[inVec[0]][inVec[1]] = 'M';
        cout << "Miss!\n";
    }
    else if (attempts[inVec[0]][inVec[1]] == '-' && field[inVec[0]][inVec[1]] != '-')
    {
        attempts[inVec[0]][inVec[1]] = 'H';
        cout << "Hit!\n";
        switch (field[inVec[0]][inVec[1]])
        {
        case 'C':
            cruiserHits.pop_back();
            break;
        case 'b':
            battleshipHits.pop_back();
            break;
        case 'd':
            destroyerHits.pop_back();
            break;
        case 's':
            submarineHits.pop_back();
            break;
        case 'c':
            CarrierHits.pop_back();
            break;
        }
        checkHits();
    }
    sleep(1);
}

bool checkHits()
{
    switch (field[attemptCoords[0]][attemptCoords[1]])
    {
    case 'C':
        if (cruiserHits.empty())
        {
            sleep(1);
            cout << "Crusier sunk!" << endl;
        }
        break;
    case 'b':
        if (battleshipHits.empty())
        {
            sleep(1);
            cout << "Battleship sunk!" << endl;
        }
        break;
    case 'd':
        if (destroyerHits.empty())
        {
            sleep(1);
            cout << "Destroyer sunk!" << endl;
        }
        break;
    case 's':
        if (submarineHits.empty())
        {
            sleep(1);
            cout << "Submarine sunk!" << endl;
        }
        break;
    case 'c':
        if (CarrierHits.empty())
        {
            sleep(1);
            cout << "Carrier sunk!" << endl;
        }
        break;
    }
    if (cruiserHits.empty() && battleshipHits.empty() && destroyerHits.empty() && submarineHits.empty() && CarrierHits.empty())
    {
        return true;
    }
    else
    {
        return false;    
    }
}

void resetGrid(char inArray[10][10]){
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            inArray[i][j] = '-';
        }
    }
}
