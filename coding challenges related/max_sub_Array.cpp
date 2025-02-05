#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> &arr)
{
    int current_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];

        // If the current sum is less than the current element, reset the sum
        if (current_sum < arr[i])
        {
            current_sum = arr[i];
        }

        // Update the max sum
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main()
{
    vector<int> a = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubArraySum(a) << endl;
}