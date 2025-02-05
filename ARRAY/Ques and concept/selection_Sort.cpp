#include <iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] <<" ";
    }
}

int selectionSort(int A[], int n)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i] < A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }
    return -1;
}

int main()
{
    int A[6] = {2, 3, 7, 5, 8, 1};
    selectionSort(A, 6);
    printArray(A, 6);
}
