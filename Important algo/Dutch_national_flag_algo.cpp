// Sort 0 1 2

#include <bits/stdc++.h>
using namespace std;
void swapele(vector<int> &arr, int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void Sort_0_1_2(vector<int> &nums)
{
    int low = 0, mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swapele(nums, low, mid);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swapele(nums, mid, high);
            high--;
        }
    }
}

int main()
{
    vector<int> A = {2, 1, 0, 1, 1, 0, 0, 2, 1, 2, 1};
    Sort_0_1_2(A);
    for (int num : A)
    {
        cout << num << " ";
    }
    cout << endl;
}