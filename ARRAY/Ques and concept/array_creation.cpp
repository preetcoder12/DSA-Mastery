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

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *A = new int[n];

    cout << "Enter the elements of the array:" << endl;
    getArray(A, n);
    cout << "printed array will be : " << endl;

    printArray(A, n);

    return 0;
}