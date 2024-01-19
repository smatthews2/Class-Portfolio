#include "logic.h"

void printGameBoard(const char inArray[3][3], int rows, int cols)
{
    system("clear");
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << inArray[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

bool displayMenu()
{
    printGameBoard(gameBoard, 3, 3);
    if (playerTurn == true)
    {
        cout << "Player's turn.\n";
        playerMove();
    }
    else
    {
        cout << "AI's turn.\n";
        calculateAIMove();
    }
    switch (winCond(gameBoard))
    {
    case 1:
        cout << "Player wins!\n";
        return false;
    case 2:
        cout << "AI wins!\n";
        return false;
    case 3:
        cout << "Draw!\n";
        return false;
    }
    return true;
}

void arr1DTo2D(int x, int &y, int &z)
{
    switch (x)
    {
    case 0:
        y = 0;
        z = 0;
        break;
    case 1:
        y = 0;
        z = 1;
        break;
    case 2:
        y = 0;
        z = 2;
        break;
    case 3:
        y = 1;
        z = 0;
        break;
    case 4:
        y = 1;
        z = 1;
        break;
    case 5:
        y = 1;
        z = 2;
        break;
    case 6:
        y = 2;
        z = 0;
        break;
    case 7:
        y = 2;
        z = 1;
        break;
    case 8:
        y = 2;
        z = 2;
        break;
    }
}

void calculateAIMove()
{
    int AIRow, AICol, x, i;
    unsigned seed = time(0);
    srand(seed);
    update1DArray(gameBoard);
    x = std::experimental::fundamentals_v2::randint(0, 8);
    if (winMove[x] == '-')
    {
        arr1DTo2D(x, AIRow, AICol);
    }
    else if (winMove[x] != '-')
    {
        if (rand() % 2 == 1)
        {
            x = std::experimental::fundamentals_v2::randint(x + 1, 8) % 9;
        }
        else
        {
            x = std::experimental::fundamentals_v2::randint(x - 1, 8) % 9;
        }
        arr1DTo2D(x, AIRow, AICol);
    }
    checkBoard(AIRow, AICol);
}

void playerMove()
{
    int userRow, userCol;
    cout << "State the row where you would like your X to be.\n";
    cin >> userRow;
    cout << "Now, state the column were you would like your X to be.\n";
    cin >> userCol;
    checkBoard(userRow, userCol);
}

void checkBoard(int currentRow, int currentCol)
{
    if (playerTurn)
    {
        if (gameBoard[currentRow][currentCol] == '-')
        {
            gameBoard[currentRow][currentCol] = 'X';
            playerTurn = false;
        }
        else
        {
            cout << "Invalid move.\n";
            playerMove();
        }
    }
    else
    {
        if (gameBoard[currentRow][currentCol] == '-')
        {
            gameBoard[currentRow][currentCol] = 'O';
            playerTurn = true;
        }
        else
        {
            calculateAIMove();
        }
    }
}

void update1DArray(char inArray[3][3])
{
    int i, x, y, t = 0;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            winMove[t] = inArray[x][y]; // Put the board into one dimension to analyze easier for the AI.
            t++;
        }
    }
}

bool allSpacesFull()
{
    bool fullOrNot = true;
    for (char x : winMove)
    {
        if (x == '-')
        {
            fullOrNot = false;
        }
    }
    return fullOrNot;
}

int winCond(char inArray[3][3])
{
    int i, j;
    update1DArray(gameBoard);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // Check gameboard for horizontal wins.
            if (gameBoard[i][0] == 'X' && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
            {
                printGameBoard(gameBoard, 3, 3);
                return 1;
            }
            else if (gameBoard[i][0] == 'O' && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
            {
                printGameBoard(gameBoard, 3, 3);
                return 2;
            }
            // And vertical wins.
            if (gameBoard[0][j] == 'X' && gameBoard[0][j] == gameBoard[1][j] && gameBoard[1][j] == gameBoard[2][j])
            {
                printGameBoard(gameBoard, 3, 3);
                return 1;
            }
            else if (gameBoard[0][j] == 'O' && gameBoard[0][j] == gameBoard[1][j] && gameBoard[1][j] == gameBoard[2][j])
            {
                printGameBoard(gameBoard, 3, 3);
                return 2;
            }
            // And finally, diagonal wins. First descending, then ascending.
            if (gameBoard[0][0] == 'X' && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
            {
                printGameBoard(gameBoard, 3, 3);
                return 1;
            }
            else if (gameBoard[0][0] == 'O' && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
            {
                printGameBoard(gameBoard, 3, 3);
                return 2;
            }
            if (gameBoard[2][0] == 'X' && gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2])
            {
                printGameBoard(gameBoard, 3, 3);
                return 1;
            }
            else if (gameBoard[2][0] == 'O' && gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2])
            {
                printGameBoard(gameBoard, 3, 3);
                return 2;
            }
        }
    }
    if (allSpacesFull())
    {
        printGameBoard(gameBoard, 3, 3);
        return 3;
    }
    return 0;
}
