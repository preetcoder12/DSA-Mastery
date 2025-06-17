#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int ans = -1;
    for (int n : nums)
    {
        freq[n]++;
    }
    for (auto &[n, i] : freq)
    {
        if (i == 1)
        {
            ans = n;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {11, 22, 33, 11, 33};
    cout << "Unique number is : " << singleNumber(nums) << endl;
    return 0;
}