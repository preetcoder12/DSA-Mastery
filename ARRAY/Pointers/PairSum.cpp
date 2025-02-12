#include <bits/stdc++.h>
using namespace std;

int pairSum(vector<int> &arr, int n, int target)
{
    int count = 0;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            count++;
            left++;
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return (count == 0) ? -1 : count;
}

int main()
{
    vector<int> A = {1,2,4,5,7,8};
    int n = A.size();
    int target = 5;
    cout << pairSum(A, n, target) << endl;
    return 0;
}
