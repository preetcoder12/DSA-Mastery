#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int search(int *arr, int n, int key)
{
    // sort
    int sizeodarray =0;
    
    cout << sizeodarray << endl;
    sort(arr, arr + sizeodarray);

    // roatation of array n times
    n = n % sizeodarray;
    for (int i = 0; i < sizeodarray; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, 0, sizeodarray - 1);
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, n, sizeodarray - 1);
    for (int i = 0; i < sizeodarray; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int low = 1;
    int high = n - 1;
    int ans = 0;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int A[4] = {2, 4, 3, 1};
    int key = 4;
    int n = 2;
    cout << search(A, n, key) << endl;
    return 0;
}
//