#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    int n = arr.size();
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i --;
    }
    if (i >= 0)
    {
        int j = n - 1;
        while (arr[j] <= arr[i])
        {
            j--;
        }
        swap(arr[i], arr[j]);
    }
    reverse(arr.begin() + i +1, arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a = {2, 4, 1, 7, 5, 0};
    nextPermutation(a);
}