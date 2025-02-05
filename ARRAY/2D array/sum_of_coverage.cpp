#include <bits/stdc++.h>
using namespace std;

int coverageOfMatrix(vector<vector<int>> &mat)
{
    int rows = mat.size();
    int cols = mat[0].size();
    int totalCoverage = 0;

    // Define the directions for top, bottom, left, and right
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    /*
    {-1, 0} represents moving up (decrease row index by 1, column stays the same).
    {1, 0} represents moving down (increase row index by 1, column stays the same).
    {0, -1} represents moving left (row stays the same, decrease column index by 1).
    {0, 1} represents moving right (row stays the same, increase column index by 1)
    */

    // Traverse each cell in the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == 0)
            { // Check for zero
                int coverage = 0;

                // Check all four possible adjacent cells
                for (auto dir : directions)
                {
                    int newRow = i + dir.first;
                    int newCol = j + dir.second;
                    /*
                    1. Upward (dir = {-1, 0})
                        dir.first = -1: This means we want to move up (decrease the row index).
                        dir.second = 0: This means we don’t change the column index (stay in the same column).
                    */

                    // Check if the adjacent cell is within bounds and is a 1
                    if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && mat[newRow][newCol] == 1)
                    {
                        coverage++;
                    }
                }
                // Add the coverage for this zero to the total coverage
                totalCoverage += coverage;
            }
        }
    }

    return totalCoverage;
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
