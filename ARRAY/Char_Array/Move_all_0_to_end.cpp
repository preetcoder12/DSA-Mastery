#include <bits/stdc++.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr)
{
    int j = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int n : arr)
    {
        cout << n << " ";
    }
}

int main()
{
    vector<int> A = {2, 0, 4, 1, 3, 0, 28};
    pushZerosAtEnd(A);
    return 0;
}