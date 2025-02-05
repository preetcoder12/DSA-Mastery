#include <iostream>
using namespace std;

int searchInsert(int nums[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > target)
        {
            nums[i] = target;
            return i;
            break;
        }
    }
}


void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}


int main()
{
    int nums[6] = {1, 2, 3, 4, 6, 7};
    cout << searchInsert(nums, 5, 6) << endl;
    cout <<"New array is " << endl;
    printArray(nums,6);
}