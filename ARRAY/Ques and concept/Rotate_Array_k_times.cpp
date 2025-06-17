#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    vector<int> rotated(n);
    for (int i = 0; i < n; i++)
    {
        rotated[(i + k) % n] = nums[i];
    }
    nums = rotated;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = nums.size();
    rotate(nums, k);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
