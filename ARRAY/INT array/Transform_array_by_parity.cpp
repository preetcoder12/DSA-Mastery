#include <bits/stdc++.h>
using namespace std;
vector<int> transformArray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            nums[i] = 0;
        }
        else
        {
            nums[i] = 1;
        }
    }
    sort(nums.begin(), nums.end());
    return nums;
}
int main()
{
    vector<int> a = {4, 3, 2, 3};
    cout << "before transform" << endl;
    for (int n : a)
    {
        cout << n << " ";
    }
    cout << endl;
    transformArray(a);
    cout << "after transform" << endl;
    for (int n : a)
    {
        cout << n << " ";
    }
    cout << endl;
}