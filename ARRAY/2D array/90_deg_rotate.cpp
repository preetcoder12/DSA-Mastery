#include <bits/stdc++.h>
using namespace std;

void inplaceRotate(vector<vector<int>> &inputArray)
{

    int n = inputArray.size();
    // transpose of matrix done here
    // Original Matrix:
    // 1  2  3
    // 4  5  6
    // 7  8  9

    // Transpose:
    // 1  4  7
    // 2  5  8
    // 3  6  9

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(inputArray[i][j], inputArray[j][i]);
        }
    }
    // This swaps topmost element with the bottommost in each column.
    // Example Walkthrough

    // Input Matrix
    // 1  1  1
    // 0  0  0
    // 3  3  3

    // Step 1: Transpose the Matrix
    // 1  0  3
    // 1  0  3
    // 1  0  3
    
    // Step 2: Reverse Each Column
    // 3  0  1
    // 3  0  1
    // 3  0  1
    for (int i = 0; i < n; i++)
    {
       reverse(inputArray[i].begin() , inputArray[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << inputArray[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> inputArray = {
        {1, 1, 1},
        {0, 0, 0},
        {3, 3, 3}};

    inplaceRotate(inputArray);
    return 0;
}
