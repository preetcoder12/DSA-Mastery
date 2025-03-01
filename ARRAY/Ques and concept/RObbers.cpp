#include <bits/stdc++.h>
using namespace std;

int rober(vector<int> &nums)
{
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;

    if (nums.size() == 0)
        return 0;
    if (nums.size() == 1)
        return nums[0];

    for (int i = 1; i < n; i++)
    {
        int curr = max(prev, nums[i] + prev2);
        prev2 = prev;
        prev = curr;
    }

    return prev;
}

int main()
{
    vector<int> nums = {1,2,3,1};
    cout << rober(nums) << endl;
    return 0;
}