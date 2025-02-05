#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int arr[][3], int row, int col)
{
    vector<int> ans;
    for (int col = 0; col < 3; col++)
    {
        if (col & 1)
        {
            for (row = 0; row < 3; row++)
            {
                ans.push_back(arr[row][col]);
            }
            cout << endl;
        }
        else
        {
            for (row = 2; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
            cout << endl;
        }
    }
    return ans;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> result = WavePrint(arr, 3, 3);
    for (int val : result)
    {
        cout << val << " ";
    }
}