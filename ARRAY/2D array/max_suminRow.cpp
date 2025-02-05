#include <iostream>
using namespace std;

void RowSum(int arr[][3], int row, int col)
{
    int maxSum = 0;
    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    cout << "Maximum sum will be " << maxSum << endl;
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

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    RowSum(arr, 3, 3);
}