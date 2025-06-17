#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> numset(nums.begin(), nums.end());
    int maxlength = 0;
    for (int num : numset)
    {
        if (numset.find(num - 1) == numset.end())
        {
            int currele = num;
            int currlength = 1;
            while (numset.find(currele + 1) != numset.end())
            {
                currele++;
                currlength++;
            }
            maxlength = max(maxlength, currlength);
        }
    }
    return maxlength;
}
int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums) << endl;
    return 0;
}