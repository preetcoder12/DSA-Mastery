#include <iostream>
using namespace std;
#include <vector>

void merge(int A[], int m, int B[], int n, int C[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j < n)
    {
        C[k] = B[j];
        k++;
        j++;
    }
}

void print(int ans[], int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << ans[k] << " ";
    }
    cout << endl;
}

int main()
{

    int A[5] = {1,3,5,7,8};
    int B[5] = {2,4,6,8,134};
    int C[10] = {0};
    merge(A, 5, B, 5, C);
    print(C, 10);
}