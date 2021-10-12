#include <iostream>
using namespace std;

// initializing the gride size
const int boardSize = 9;

// protypes of helper functions
void show(char board[boardSize], int length);
bool win(char board[boardSize], int length);



int main()
{
    // declaring board grid for the game
    char board[boardSize];
    for (int i = 0; i < boardSize; i++)
    {
        board[i] = '-';
    }
    int length = sizeof(board)/sizeof(board[0]);

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
        cout << endl << "Computer Move!" << endl;
        while (true) {
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

// helper function for checking the winner (i know its bad design. didnt come up with better algorithm)
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