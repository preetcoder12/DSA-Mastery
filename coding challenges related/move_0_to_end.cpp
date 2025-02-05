#include <bits/stdc++.h>
using namespace std;
void pushZerosToEnd(vector<int> &arr)
{
    int n = arr.size();
    int j = 0;
    if (n <= 1)
    {        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i] , arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = arr.size();
    pushZerosToEnd(arr);

    return 0;
}