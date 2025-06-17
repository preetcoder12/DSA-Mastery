#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int maxcount = 0;
    int ans = -1;
    for (int num : nums)
    {
        freq[num]++;
        if (freq[num] > maxcount)
        {
            maxcount = freq[num];
            ans = num;
        }
    }
    return ans;
}
int main()
{
    vector<int> a = {3, 42, 4234, 243, 324, 234, 243, 24, 2223, 32, 2, 2, 21, 21, 2, 0};
    int ans = majorityElement(a);
    cout << "majority element is: " << ans << endl;
    return 0;
}