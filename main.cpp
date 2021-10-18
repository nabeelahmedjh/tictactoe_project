#include <iostream>
#include "helper.h"
using namespace std;

int main()
{
    // declaring board grid for the game
    char board[boardSize];
    for (int i = 0; i < boardSize; i++)
    {
        board[i] = '-';
    }
    int length = sizeof(board) / sizeof(board[0]);

    show(board, length);
    int tempEntry;
    cout << endl;
    while (true)
    {
        cout << "Enter a value from 1-9: ";
        cin >> tempEntry;

        // checking for user entry is valid or not
        if ((!(tempEntry >= 1 && tempEntry <= boardSize)))
        {
            cout << "enter a valid entry!!!!" << endl;
            continue;
        }
        // checking if the gride index is already filled or not
        if (board[tempEntry - 1] != '-')
        {
            cout << "enter a valid entry!!!!" << endl;
            continue;
        }
        tempEntry--;
        board[tempEntry] = 'X';

        // if satisfies the winner condtion then program will end
        bool won = win(board, length);
        show(board, length);
        if (won == true)
            break;

        // generating random entry for computer player (for now its random)
        int computerMove;
        cout << endl
             << "Computer Move!" << endl;
        while (true)
        {
            computerMove = (rand() % 9);
            if (board[computerMove] == '-')
            {
                board[computerMove] = 'O';
                break;
            }
        }

        show(board, length);

        // checking for winner
        won = win(board, length);
        if (won == true)
            break;
    }

    return 0;
}
