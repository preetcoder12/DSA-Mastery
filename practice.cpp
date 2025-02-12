#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (map.find(complement) != map.end())
        {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> A = {3, 2, 4};
    int target = 6;

    vector<int> B = twoSum(A, target);

    cout << "Pair: ";
    for (int num : B)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}