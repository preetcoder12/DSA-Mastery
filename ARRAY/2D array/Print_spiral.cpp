#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    if (nRows == 0 || nCols == 0) return;

    int left = 0;
    int top = 0;    
    int right = nCols - 1;
    int bottom = nRows - 1;
    vector<int>ans;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << input[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << input[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << input[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << input[i][left] << " ";
            }
            left++;
        }
    }
}
