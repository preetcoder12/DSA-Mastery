#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getSecondLargest(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    if (n < 2)
    {
        return -1;
    }
    int max = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < max)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr) << endl;
}
