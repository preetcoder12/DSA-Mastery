#include <bits/stdc++.h>
using namespace std;
int maxSubarraySumCircular(vector<int> &nums)
{
    int maxkadane = INT_MIN;
    int maxcurr = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        maxcurr = max(nums[i], nums[i] + maxcurr);
        maxkadane = max(maxkadane, maxcurr);
    }

    int minkadane = INT_MAX;
    int mincurr = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        mincurr = min(nums[i], nums[i] + mincurr);
        minkadane = min(mincurr, minkadane);
        total += nums[i];
    }
    int circularsum = total - minkadane;
    if (maxkadane < 0)
        return maxkadane;
    return max(circularsum, maxkadane);
}
int main()
{
    vector<int> nums = {1, -2, 3, -2};
    cout << maxSubarraySumCircular(nums) << endl;
    return 0;
}