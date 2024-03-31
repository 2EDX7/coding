#include <iostream>
#include <ctime>
using namespace std;

const int n = 9;
const int m = 9;

void printMatrix(int matrix[][n], int n, int m)
{
    cout << "matrix elements: \n";

    for (int i = 0; i < m; i++) // Use m as the first dimension
    {
        for (int j = 0; j < n; j++) // Use n as the second dimension
        {
            cout << matrix[i][j] << "|";
            if (j == n - 1)
                cout << "\n";
        }
    }
}

int main()
{
    // int subn = 0, npos = 2, subm = 0, mpos = 2;
    int matrix[m][n] = {{-1, -1, -1, -1, -1, -1, -1, -1, -1}};
    printMatrix(matrix, n, m);
    // fillSubMatrix(matrix, npos, subn, mpos, subm); // Uncomment this line
    printMatrix(matrix, n, m);

    return 0;
}
