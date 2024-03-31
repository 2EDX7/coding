#include <iostream>
using namespace std;

void showboard(char A[], int &choice);
int getindex(int row, int colum);
bool checkTie(char A[]);
bool checkwin(char A[], char &player);
void changsymb(char &symb);
char player = ' ';

int main()
{
    char A[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char symb = 'X';
    int fchoice, choice, row = 0, colum = 0, index;
    do
    {
        cout << "choose: \n 1- start playing ! \n 2- obtain informations about the game \n 3- exit \n";
        cin >> fchoice;
    } while (fchoice <= 0 || fchoice > 3);

    if (fchoice == 1)
    {
        do
        {
            do
            {
                cout << "it's " << symb << " turn \nenter the row then the colum: ";
                cin >> row >> colum;
            } while (row <= 0 || row > 3 || colum <= 0 || colum > 3 || A[getindex(row, colum)] != ' ');

            index = getindex(row, colum);
            A[index]=symb;
            changsymb(symb);
            if (checkwin(A, player) || checkTie(A))
            {
                break;
            }
            showboard(A, choice);
            while (choice == 2)
            {
                A[index] = ' ';
                showboard(A, choice);
                changsymb(symb);
            }
        } while (choice != 3);
        if(choice != 3){
        for (int i = 0; i < 9; i++)
        {
            if (A[i] == ' ')
            {
                cout << "| | ";
            }
            else
            {
                cout << "|" << A[i] << "| ";
            }

            if (i == 2 || i == 5)
            {
                cout << "\n";
            }
        }
        }

        if (checkwin(A, player))
        {
            cout << "\nthe player  " << player << "  won the game  !";
        }
        else if (checkTie(A))
        {
            cout << "\nthe game end with a draw ";
        }
    }
    return 0;
}

bool checkwin(char A[], char &player)
{
    for (int i = 0; i < 3; ++i)
    {
        if (A[i * 3] != ' ' && A[i * 3] == A[i * 3 + 1] && A[i * 3 + 1] == A[i * 3 + 2])
        {
            player = A[i];
            return true;
        }
        if (A[i] != ' ' && A[i] == A[i + 3] && A[i + 3] == A[i + 6])
        {
            player = A[i];
            return true;
        }
    }
    if (A[0] != ' ' && A[0] == A[4] && A[4] == A[8])
    {
        player = A[0];
        return true;
    }
    if (A[2] != ' ' && A[2] == A[4] && A[4] == A[6])
    {
        player = A[2];
        return true;
    }
    return false;
}

void changsymb(char &symb)
{
    if (symb == 'X') symb = 'O';
    else symb = 'X';
}

void showboard(char A[], int &choice)
{
    cout << "\n";
    for (int i = 0; i < 9; i++)
    {
        if (A[i] == ' ')
        {
            cout << "| | ";
        }
        else
        {
            cout << "|" << A[i] << "| ";
        }
        if (i == 2 || i == 5)
        {
            cout << "\n";
        }
    }
    cout << "\n\n 1- continue \n 2- restore \n 3- exit \n";
    cin >> choice;
}

int getindex(int row, int colum)
{
    switch (row)
    {
    case 1:
        return colum - row;
    case 2:
        return colum + row;
    case 3:
        switch (colum)
        {
        case 1:
            return 6;
        case 2:
            return 7;
        case 3:
            return 8;
        }
    }
    return 404;
}

bool checkTie(char A[])
{
    if (!checkwin(A, player))
    {
        for (int i = 0; i < 10; i++)
        {
            if (A[i] == ' ') return false;
        }
    }
    return true;
}