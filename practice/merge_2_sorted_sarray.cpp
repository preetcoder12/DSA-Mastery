#include <iostream>
using namespace std;

void print(int C[], int p)
{
    for (int i = 0; i < p; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;
}

void merge(int A[], int m, int B[], int n)
{
    int p = m + n;
    int C[p];
    int k = 0;

    for (int i = 0; i < m; i++)
    {
        if (A[i] != 0)
        { // Only copy non-zero elements
            C[k] = A[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        C[k] = B[i];
        k++;
    }
    print(C, k);
}
int main()
{
    int A[6] = {1, 2, 3, 0, 0, 0};
    int B[3] = {2, 4, 6};

    merge(A, 6, B, 3);
}