#include <iostream>
using namespace std;
int partition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (A[j] < pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[high]);
    return i + 1;
}

void quicksort(int A[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(A, low, high);
        quicksort(A, low, pi - 1);
        quicksort(A, pi + 1, high);
    }
}

int main()
{
    int A[5] = {34, 56, 342, 546, 12};



    quicksort(A, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}