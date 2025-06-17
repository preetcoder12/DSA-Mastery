#include <bits/stdc++.h>
using namespace std;

void search(int a[][3], int target)
{
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == target)
            {
                cout << "value found at row : " << i << " and column " << j << endl;
                break;
            }
        }
        cout << endl;
    }
}

int main()
{
    int a[3][3];
    int target;
    cout << "enter the values in 2d matrix " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter target value to find : " << endl;
    cin >> target;
    search(a, target);
}