#include <iostream>
using namespace std;

void merge(int A[], int low, int mid, int high)
{
    int i = 0;
    int j = 0;
    int k = low;

    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = A[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = A[mid + 1 + i];
    }
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        A[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        A[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int low, int high)
{

    if (low >= high)
    {
        return;
    }

    int mid = low + (high - low) / 2;
    mergeSort(A, low, mid);
    mergeSort(A, mid + 1, high);
    merge(A, low, mid, high);
}

int main()
{
    int A[5] = {43, 65, 34, 54, 234};

    mergeSort(A, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}