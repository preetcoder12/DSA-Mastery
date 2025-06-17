#include <iostream>
using namespace std;

void getArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}
// void printArray(int A[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << endl;
//     }
// }

bool linear_search(int A[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (k == A[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int n, k;
    cout << "Enter the value of n: ";
    cin >> n;
    int *A = new int[n];

    cout << "Enter the elements of the array:" << endl;
    getArray(A, n);

    // cout << "printed array will be : " << endl;
    // printArray(A, n);

    cout << "Now enter the key to find" << endl;
    cin >> k;

    bool found = linear_search(A, n, k);
    if (found)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "elemen not found" << endl;
    }
    return 0;
}