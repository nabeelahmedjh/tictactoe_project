#include "helper.h"

// helper function for showing the updated grid everytime
void show(char board[boardSize], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (i%3 == 0)
        {
            cout << endl << "| ";

        }
        cout << board[i] << " | ";
    }
}