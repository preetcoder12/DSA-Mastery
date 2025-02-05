#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> &arr, int d)
{
    int n = arr.size();
    d %= n; // Handle cases where d > n
    if (d == 0)
        return;

    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());

    // Reverse the entire array
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

/*
let , Original Array: 1 2 3 4 5 
d = 2
Process:

1.) Reverse the first 
    d = 2 
    elements: [2, 1, 3, 4, 5].

2.) Reverse the remaining 
    𝑛 − 𝑑 = 5
    n−d=5 elements: [2, 1, 7, 6, 5, 4, 3].

3.) Reverse the entire array: [3, 4, 5, 6, 7, 1, 2].
*/

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    rotateArr(arr, 3);
    return 0;
}
