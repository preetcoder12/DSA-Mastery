#include <iostream>
using namespace std;

void sort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

double findmid(int A[], int n1, int B[], int n2)
{

    int n3 = n1 + n2;

    int C[n3];
    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        C[k] = A[i];
        k++;
    }

    for (int i = 0; i < n2; i++)
    {
        C[k] = B[i];
        k++;
    }
    sort(C, n3);

    if (n3 % 2 == 0)
    {
        int mid1 = n3 / 2;
        int mid2 = mid1 - 1;
        return (C[mid1] + C[mid2]) / 2.0;
    }
    else
    {
        return C[n3 / 2];
    }
}

int main()
{
    int A[2] = {4, 3};
    int B[3] = {1, 2, 5};

    cout << findmid(A, 2, B, 3) << endl;

    cout << endl;
}
