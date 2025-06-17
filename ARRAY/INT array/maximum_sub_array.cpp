#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (maxsum < sum)
        {
            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxsum;
}
int main()
{
    vector<int> nums = {2, 3, 5, -1, -3, 2, 21, -11};
    int ans = maxSubArray(nums);
    cout << "Max sum subarray is : " << ans << endl;
    return 0;
}