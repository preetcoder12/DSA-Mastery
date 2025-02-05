#include <bits/stdc++.h>
using namespace std;

bool isMatrixSymmetric(vector<vector<int>> matrix)
{
    int n = matrix.size();

    for (const auto &row : matrix)
    {
        if(row.size()!=n){
            return false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}
int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {2, 0, 4},
        {3, 4, 1}};
    cout << isMatrixSymmetric(matrix) << endl; // Expected output: 5
    return 0;
}