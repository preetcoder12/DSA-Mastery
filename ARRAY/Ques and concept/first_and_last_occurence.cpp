#include <iostream>
using namespace std;

int first_occur(int A[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (A[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (A[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int last_occur(int A[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (A[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (A[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int A[9] = {1, 2, 3, 3, 3, 3, 3, 3, 4};

    cout << "first occurence of 3 is at index  " << first_occur(A, 9, 3) << endl;
    cout << "last occurence of 3 is at index " << last_occur(A, 9, 3) << endl;

    return 0;
}