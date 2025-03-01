#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int sum = 0;
    int sum2 = 0;
    if (nums.size() == 0)
    {
        return 0;
    }
    for (int i = 1; i < nums.size() + 1; i++)
    {
        sum += i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        sum2 += nums[i];
    }
    int ans = sum - sum2;
    return ans;
}
int main()
{
    vector<int> arr = {0,3,1,4};
    int ans = missingNumber(arr);
    cout << ans << endl;
    return 0;
}