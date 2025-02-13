#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] > 0 && nums[j] < 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        else if (nums[i] < 0)
        {
            i++;
        }
        else if (nums[i] > 0 )
        {
            j--;
        }
    }
    return nums;
}

int main()
{
    vector<int> A = {1, 2, -3, 4, -4, -5};
    separateNegativeAndPositive(A);
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}