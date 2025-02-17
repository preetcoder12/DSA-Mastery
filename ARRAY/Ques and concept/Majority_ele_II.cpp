#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int, int> freq;
    int n = arr.size();
    vector<int> ans;

    for (int num : arr)
    {
        freq[num]++;
    }

    for (const auto &num : freq)
    {
        if (num.second > (n / 3))
        {
            ans.push_back(num.first);
        }
    }

    return ans;
}
int main()
{
    vector<int> A = {2, 1, 0, 1, 1, 0, 0, 2, 1, 2, 1};
    vector<int> ans = majorityElementII(A);
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}