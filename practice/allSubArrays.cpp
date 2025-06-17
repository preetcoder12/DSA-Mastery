#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}