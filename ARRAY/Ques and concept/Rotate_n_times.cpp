#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());

    // Reverse first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse remaining n-k elements
    reverse(nums.begin() + k, nums.end());

    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
}

int main()
{
    vector<int>A={3,6,34,7,45,8,34};
    int k = 5;
    rotate(A,k);
    return 0;
}