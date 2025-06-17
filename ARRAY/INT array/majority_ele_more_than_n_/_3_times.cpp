#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int n = nums.size();
    vector<int> ans;
    for (int n : nums)
    {
        freq[n]++;
    }
    for (auto &[num, count] : freq)
    {
        if (count > n / 3)
        {
            ans.push_back(num);
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {1, 2, 3, 3};
    vector<int> ans = majorityElement(A);
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}