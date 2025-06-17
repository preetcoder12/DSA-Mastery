#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> A = {12,43,23,64,2,5,2,12};
    cout << "total unique elements are : "<<removeDuplicates(A) << endl;
    return 0;
}