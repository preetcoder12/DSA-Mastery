#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &arr)
{

    int left = 0;
    int right = arr.size() - 1;

    sort(arr.begin(), arr.end());

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (mid % 2 == 1)
        {
            mid--;
        }
        if (arr[mid] == arr[mid + 1])
        {
            left = mid + 2;
        }
        else
        {
            right = mid;
        }
    }
    return arr[left];
}

int main()
{
    vector<int> A = {1, 1, 2, 2, 4, 5, 5};
    cout << singleNonDuplicate(A) << endl;
    return 0;
}