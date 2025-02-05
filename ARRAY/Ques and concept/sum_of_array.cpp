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
void sum_array(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    cout << "the sum of all elements will be " << sum << endl;
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

    cout << "printed array will be : " << endl;
    printArray(A, n);

    cout << endl;
    sum_array(A, n);
    cout << endl;
    
    cout << "Everything is fine" << endl;
    return 0;
}