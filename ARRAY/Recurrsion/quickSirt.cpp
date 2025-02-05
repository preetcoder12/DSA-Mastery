
#include <iostream>
using namespace std;

int partition(int A[], int s, int e)
{
    int pivot = A[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (A[i] <= pivot)
        {
            count++;
        }
    }
    int pivot_index = s + count;
    swap(A[pivot_index], A[s]);

    int i = s;
    int j = e; 
    while (i < pivot_index && j > pivot_index)
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < pivot_index && j > pivot_index)
        {
            swap(A[i++], A[j--]);
        }
    }
    return pivot_index;
}

void quickSort(int A[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(A, s, e);
    quickSort(A, s, p - 1);
    quickSort(A, p + 1, e);
}

int main()
{
    int A[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    quickSort(A, 0, 9);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}