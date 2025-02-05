#include <iostream>
using namespace std;

void getarray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

int binary_search(int A[], int size, int k)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (A[mid] == k)
        {
            return mid;
        }

        if (k < A[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }
        int mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int n, k;

    cout << "Enter the size of an array : " << endl;
    cin >> n;

    int *A = new int[n];

    cout << "......... please make sure to enter the elements is monotonic order .........." << endl;
    cout << "Enter the elemants of an array: " << endl;
    getarray(A, n);

    cout << "Enter the value of key  : " << endl;
    cin >> k;

    int index = binary_search(A, n, k);

    if (index != -1)
    {
        cout << "element found at " << index << endl;
    }
    else
    {
        cout << "element not found  " << endl;
    }

    return 0;
}