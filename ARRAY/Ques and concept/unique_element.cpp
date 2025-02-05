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

void unique_element(int A[], int n)
{
    bool isUnique;

    for (int i = 0; i < n; i++)
    {
        isUnique = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && A[i] == A[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << A[i] << " is unique" << endl;
        }
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
    unique_element(A, n);

    return 0;
}