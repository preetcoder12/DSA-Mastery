#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row(n, 0); // contain oly one row in 1d
    vector<int> col(m, 0); // contain oly one col in 1d

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (row[i])
        {
            for (int j = 0; j < m; j++)
            {

                matrix[i][j] = 0;
            }
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (col[j])
        {
            for (int i = 0; i < n; i++)
            {

                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {2, 2, 0},
        {3, 0, 3}};
    setZeros(matrix);
}