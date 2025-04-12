#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &arr, int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n2)
    {
        arr[k++] = arr2[j++];
    }
    return arr;
}

void mergesort(vector<int> &arr, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    vector<int> arr = {2, 3, 4, 2, 2, 4, 2};
    int n = arr.size();

    mergesort(arr, 0, n - 1);
    cout << "sorted array is : " << endl;
    for (int n : arr)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}