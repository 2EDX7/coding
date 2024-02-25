#include <iostream>
#include <ctime>
using namespace std;

const int n = 9, m = 9;

void printMatrix(int matrix[][m]);
bool checkRepetitionInRow(int matrix[][m], int row, int column);
bool checkRepetitionInColumn(int matrix[][m], int row, int column);
bool checkRepetitionInSubMatrix(int matrix[][m], int npos, int subn, int mpos, int subm);
void fillSubMatrix(int matrix[][m], int npos, int subn, int mpos, int subm);
void fillSuduko(int mat[][m]);

int main()
{
    int mat[n][m];
    fillSuduko(mat);
    printMatrix(mat);
    return 0;
}

void printMatrix(int matrix[][m])
{
    cout << "matrix elements: \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(j==0) cout<<"|";
            if(matrix[i][j]!=-1) cout << matrix[i][j] << "|";
            else cout <<" |";
            if (j == m - 1) cout << "\n";
        }
    }
}

bool checkRepetitionInRow(int matrix[][m], int row, int column)
{
    for (int i = 0; i < column; i++)
    {
        for (int j = i + 1; j < column; j++)
        {
            if (matrix[row][i] == matrix[row][j] and matrix[row][i]!=-1)
            {
                return true;
            }
        }
    }
    return false;
}

bool checkRepetitionInColumn(int matrix[][m], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            if (matrix[i][column] == matrix[j][column] and matrix[i][column]!=-1)
            {
                return true;
            }
        }
    }
    return false;
}

bool checkRepetitionInSubMatrix(int matrix[][m], int npos, int subn, int mpos, int subm)
{
    int occurrence[subn * subm] = {0};

    for (int i = npos; i < npos + subn; i++)
    {
        for (int j = mpos; j < mpos + subm; j++)
        {
            occurrence[matrix[i][j]]++;
            if (occurrence[matrix[i][j]] > 1 && matrix[i][j] != -1)
                return true;
        }
    }
    return false;
}

void fillSubMatrix(int matrix[][m], int npos, int subn,int mpos, int subm)
{    
    int control = 0;
    srand((time(0)));
    while (control < 3)
    {
        int sRow = rand() % subn + npos;
        int sColumn = rand() % subm + mpos;

        if (matrix[sRow][sColumn] == -1)
        {
            int randomNumber = rand() % 10;
            matrix[sRow][sColumn] = randomNumber;
            bool check = checkRepetitionInSubMatrix(matrix, npos, subn, mpos, subm) or checkRepetitionInRow(matrix, sRow, m) or checkRepetitionInColumn(matrix, n, sColumn);
            if(check) 
            {
                matrix[sRow][sColumn] = -1;
            }
            else {
                control++;
            }
        }
    }
}


void fillSuduko(int mat[][m]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j]=-1;
        }
        
    }
    int rposs=0,cposs=0;
    int subrs=2,subcs=2;
    int control1=1;
    while (control1<9){
        fillSubMatrix(mat,rposs,subrs,cposs,subcs);
        if(control1==3 or control1==6)
        {   
            cposs=0; subcs=2;
            rposs+=3; subrs+=3;
        }
        cposs+=3; subcs+=3;
        control1++;
    }
}
