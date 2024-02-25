#ifndef lab10_h
#define lab10_h

#include <iostream>
#include <ctime>

const int COL = 9;

using namespace std;
void print1DArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void scanMatrix(int matrix[][COL], int &n, int &m)
{
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    cout << "Enter the elements of the matrix (" << n << " x " << m << "):\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter element matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][COL], int n, int m)
{
    cout << "matrix elements: \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << "|";
            if(j == m-1) cout << "\n";
        }
    }
}

void splitEvenOdds(int matrix[][COL], int n, int m, int even[], int &size1, int odd[], int &size2)
{
    int e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] % 2 == 0)
            {
                even[e] = matrix[i][j];
                e++;
                size1 = e;
            }
            else
            {
                odd[o] = matrix[i][j];
                o++;
                size2 = o;
            }
        }
    }
}

void diagonalMatrix(int matrix[][COL], int n, int &sumOutDiagonal, int &sumInDiagonal)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumOutDiagonal += matrix[i][j];
            }
            else
            {
                sumInDiagonal += matrix[i][j];
            }
        }
    }
}

int rowSum(int matrix[][COL], int row, int colum)
{
    int rowSum = 0;
    for (int i = 0; i < colum; i++)
    {
        rowSum += matrix[row][i];
    }

    return rowSum;
}
int columSum(int matrix[][COL], int row, int colum)
{
    int columSum = 0;
    for (int i = 0; i < row; i++)
    {
        columSum += matrix[i][colum];
    }
    return columSum;
}

bool checkSum(int matrix[][COL], int n, int m)
// check if the sum of values in row i is equal to the sum of values in colum i
{
    for (int i = 0; i < n; i++)
    {
        if (columSum(matrix, n, m) == rowSum(matrix, n, m))
        {
            return false;
        }
    }

    return true;
}

bool repititionInRow(int matrix[][COL], int row, int colum)
// check if there is a repeated value in the row
{
    for (int i = 0; i < colum; i++)
    {
        for (int j = i + 1; j < colum; j++)
        {
            if (matrix[row][i] == matrix[row][j])
            {
                return true;
            }
        }
    }
    return false;
}
bool repititionInColum(int matrix[][COL], int row, int colum)
// check if there is a repeated value in the colum
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            if (matrix[i][colum] == matrix[j][colum])
            {
                return true;
            }
        }
    }
    return false;
}

bool checkRepetitionInSubMatrix(int matrix[][COL], int npos, int subn, int mpos, int subm)
{

    int occurrence[subn*subm] = {0}; // Allow for elements in the range [0, n*m]

    for (int i = npos; i < npos + subn; i++)
    {
        for (int j = mpos; j < mpos + subm; j++)
        {
            occurrence[matrix[i][j]]++;
            if (occurrence[matrix[i][j]] > 1 && matrix[i][j] != 0) return true;
        }
    }
    return false;
}

void fillSubMatrix(int matrix[][COL], int npos, int subn, int mpos, int subm) {
    int sRow, sColum, randomNumber, control = 0, counter = 0;
    srand((time(0)));

    while (control <= 3 && counter < 1000) {  // Set a maximum number of iterations with the counter
        sRow = rand() % (subn - npos + 1) + npos;
        sColum = rand() % (subm - mpos + 1) + mpos;

        if (matrix[sRow][sColum] == -1 && repititionInColum(matrix, sRow, sColum) == false &&
            repititionInRow(matrix, sRow, sColum) == false &&
            checkRepetitionInSubMatrix(matrix, npos, subn, mpos, subm) == false) {
            randomNumber = rand() % 10;  // Fix the upper limit for rand() to avoid overflow
            matrix[sRow][sColum] = randomNumber;
            control++;
        }

        counter++;
    }
}

#endif
