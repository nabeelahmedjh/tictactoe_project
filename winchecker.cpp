#include "helper.h"

// helper function for checking the winner

bool win(char board[boardSize], int length)
{

    if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }

    if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
    {
        cout << "Computer win" << endl;
        return true;
    }
    else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    return false;
}