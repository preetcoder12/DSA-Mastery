// majority element

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int maxele = -1;
    for (int num : nums)
    {
        if (count == 0)
        {
            maxele = num;
        }
        count += (num == maxele) ? 1 : -1;
    }
    count = 0;
    for (int num : nums)
    {
        if (num == maxele)
        {
            count++;
        }
    }
    return (count > n / 2) ? maxele : -1;
}
int main()
{
    vector<int> A = {2, 1, 0, 1, 1, 0, 0, 2, 1, 2, 1};
    cout << majorityElement(A) << endl;
    return 0;
}