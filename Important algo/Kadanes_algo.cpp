// Maximum Subarray Sum
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    int maximum = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maximum = max(sum, maximum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maximum;
}

int main()
{
    vector<int> arr = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    int n = arr.size();
    cout << "max sum of subarray is : " << maxSubarraySum(arr, n) << endl;
    return 0;
}

// kadane's algo :   time complexity is O(n).

//1.)    sum = sum + arr[i];
// 2.)   maximum = max(sum, maximum);
// 3.)   if (sum < 0)
//       {
//          sum = 0;
//       }