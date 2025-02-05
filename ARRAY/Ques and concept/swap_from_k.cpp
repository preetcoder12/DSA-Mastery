#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int k)
{
    int j=0;
    for (int i = 0; i < k; i++)
    {
        int element = arr[j];
        arr.erase(arr.begin() + 0);
        arr.push_back(element);
    }
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    rotateArray(arr, 2);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}