#include <bits/stdc++.h>
using namespace std;


bool isMatrixSymmetric(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> A(3, vector<int>(3)); // 3x3 matrix
    cout << "Enter the values of the array:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "The matrix looks like:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    if (isMatrixSymmetric(A))
    {
        cout << "The matrix is symmetric." << endl;
    }
    else
    {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}
