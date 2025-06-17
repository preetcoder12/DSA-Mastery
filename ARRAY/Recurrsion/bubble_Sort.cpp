#include <iostream>
using namespace std;

void bubbleSort(int A[], int n)
{
    if (n <= 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] > A[i + 1])
        {
            swap(A[i], A[i + 1]);
        }
    }
    bubbleSort(A, n - 1);
}

int main()
{
    int A[6] = {2, 5, 4, 7, 6, 8};
    bubbleSort(A, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}