#include <iostream>
using namespace std;

// protypes of helper functions
void show(char arr[9], int len);
bool win(char arr[9], int len);
int main()
{
    // declaring board grid for the game
    char board[9];
    for (int i = 0; i < 9; i++)
    {
        board[i] = '-';
    }
    int len = sizeof(board)/sizeof(board[0]);

    show(board, len);
    int temp_entry;
    cout << endl;
    while (true)
    {
        cout << "Enter a value from 1-9: ";
        cin >> temp_entry;
        
        // checking for user entry is valid or not
        if ((!(temp_entry >= 1 && temp_entry <= 9 )))
        {
            cout << "enter a valid entry!!!!" << endl;
            continue;
        }
        // checking if the gride index is already filled or not
        if (board[temp_entry - 1] != '-')
        {
            cout << "enter a valid entry!!!!" << endl;
            continue;
        }
        temp_entry--;
        board[temp_entry] = 'X';

        // if satisfies the winner condtion then program will end
        bool won = win(board, len);
        show(board, len);
        if (won == true) 
            break;
        
        // generating random entry for computer player (for now its random)
        int computer_move;
        cout << endl << "Computer Move!" << endl;
        while (true) {
            computer_move = (rand() % 9);
            if (board[computer_move] == '-')
            {
                board[computer_move] = 'O';
                break;
            }
        }

        show(board, len);
        
        // checking for winner
        won = win(board, len);
        if (won == true)
            break;
    }

    
    return 0;
}


// helper function for showing the updated grid everytime
void show(char arr[9], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (i%3 == 0)
        {
            cout << endl << "| ";

        }
        cout << arr[i] << " | ";
    }
}

// helper function for checking the winner (i know its bad design. didnt come up with better algorithm)
bool win(char arr[9], int len)
{

    if (arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }
    else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
    {
        cout << "!!!!!!!!!!---YOU WIN---!!!!!!" << endl;
        return true;
    }

    if (arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O')
    {
        cout << "Computer win" << endl;
        return true;
    }
    else if (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
        else if (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    else if (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O')
    {
        cout << "!!!!!!!!!!---COMPUTER WINS---!!!!!!" << endl;
        return true;
    }
    return false;
}