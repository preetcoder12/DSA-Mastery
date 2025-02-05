#include <iostream>
using namespace std;

void getArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void duplicate_element(int A[], int n)
{
    bool duplicate;
    for (int i = 0; i < n; i++)
    {
        duplicate = false;
        for (int j = i + 1; j < n; j++)
        {

            if (A[i] == A[j])
            {
                duplicate = true;
                break;
            }
            else
            {
                break;
            }
        }
        if (duplicate)
        {
            cout << A[i] << " is a duplicate" << endl;
        }
        else
        {
            cout << A[i] << " is not duplicate" << endl;
        }
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

    cout << "..............................." << endl;
    duplicate_element(A, n);
    return 0;
}