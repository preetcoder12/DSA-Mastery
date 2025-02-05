#include <bits/stdc++.h>
using namespace std;

int coverageOfMatrix(vector<vector<int>> &mat)
{
    int rows = mat.size();
    int col = mat[0].size();
    int totalcoverage = 0;

    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 0)
            {
                int coverage = 0;
                for (auto dir : directions)
                {
                    int newrow = i + dir.first;
                    int newcol = j + dir.second;
                    if (newrow >= 0 && newrow < rows && newcol >= 0 && newcol < col && mat[newrow][newcol] == 1)
                    {
                        coverage++;
                    }
                }
                totalcoverage += coverage;
            }
        }
    }
    return totalcoverage;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 1, 0},
        {2, 0, 1},
        {2, 0, 1}};
    cout << coverageOfMatrix(mat) << endl; // Expected output: 5
    return 0;
}
