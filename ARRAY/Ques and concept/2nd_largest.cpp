#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int num : arr)
    {
        if (num > largest)
        {
            second_largest = largest;
            largest = num;
        }
        else if (num > second_largest && num < largest)
        {
            second_largest = num;
        }
    }
    return (second_largest == INT_MIN ? -1 : second_largest);
}

int main()
{
    vector<int> arr{12, 1, 35, 10, 34, 1};
    cout << findSecondLargest(6, arr);
}