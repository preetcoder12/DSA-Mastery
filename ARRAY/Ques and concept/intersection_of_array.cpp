#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> nums1, vector<int> nums2)

{
    unordered_map<int, int> freq;
    vector<int> ans;
    for (int num : nums1)
    {
        freq[num]++;
    }
    for (int num : nums2)
    {
        if (freq[num] > 0)
        {
            ans.push_back(num);
            freq[num] = 0;
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {1, 2, 3};
    vector<int> B = {2, 4, 5};
    vector<int> ans = intersection(A, B);
    for (int n : ans)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}