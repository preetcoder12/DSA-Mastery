#include <iostream>
using namespace std;

void getArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void swap_alternarte(int A[], int n)
{
    int i = 0;

    for (i = 0; i < n; i += 2)
    {
        swap(A[i], A[i + 1]);
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *A = new int[n];

    cout << "Enter the elements of the array:" << endl;
    getArray(A, n);
    cout << endl;
    cout << "the reverse of an array will be : " << endl;

    swap_alternarte(A, n);
    printArray(A, n);

    return 0;
}