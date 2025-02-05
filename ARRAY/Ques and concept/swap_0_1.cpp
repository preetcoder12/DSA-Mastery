#include <iostream>
using namespace std;

void getArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

void swap_0_1(int A[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        while (A[i] == 0 && i < j)
        {
            i++;
        }

        while (A[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int *A = new int[n];

    cout << "Enter the elements of the array:" << endl;
    getArray(A, n);
    cout << endl;

    swap_0_1(A, n);
    printArray(A, n);

    delete[] A;

    return 0;
}