#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr)
{
    unordered_map<int, int> prefix_map;

    int maxlength = 0;
    int prefix_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum == 0)
        {
            maxlength = i + 1;
        } 
        if (prefix_map.find(prefix_sum) != prefix_map.end())
        {
            maxlength = max(maxlength, i - prefix_map[prefix_sum]);
        }
        else
        {
            prefix_map[prefix_sum] = i;
        }
    }
    return maxlength;
}
int main()
{
    vector<int> A = {1, 3, -1, 4, -4};
    cout << LongestSubsetWithZeroSum(A) << endl;
    return 0;
}