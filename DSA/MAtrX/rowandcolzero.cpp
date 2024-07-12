#include <iostream>
using namespace std;

void row_convert(int matrix[][100], int n, int row, int column, int i)
{
    for (int j = 0; j < column; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void column_convert(int matrix[][100], int n, int row, int column, int i, int j)
{
    for (int i = 0; i < column; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void set_zeros(int matrix[][100], int n, int row, int column)
{ // Removed unnecessary parameters
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                row_convert(matrix, n, row, column, i);
                column_convert(matrix, n, row, column, i, j);
            }
        }
    }
}
int main()
{
    int row, column;
    cout << "Enter the size of Row And Column the matrix: ";
    cin >> row >> column;
    int matrix[row][column];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:\n";
    set_zeros(matrix, row, column); 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
