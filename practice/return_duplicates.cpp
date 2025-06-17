#include <bits/stdc++.h>
using namespace std;

vector<int> dup(vector<int> &arr)
{
    map<int, int> freq;
    for (int num : arr)
    {
        freq[num]++;
    }
    vector<int> ans;
    for (auto &p : freq)
    {
        if (p.second > 1)
        {
            ans.push_back(p.first);
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 3, 4, 2, 2, 4, 2};
    vector<int> ans = dup(arr);
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << endl;
}