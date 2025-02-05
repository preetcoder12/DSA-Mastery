#include <iostream>
using namespace std;

void getArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void reverse_array(int A[], int n)
{
    int i=0;
    int j = n-1;
    while(i<j){
        swap(A[i], A[j]);
        i++;
        j--;
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

    reverse_array(A, n);
    printArray(A, n);

    return 0;
}