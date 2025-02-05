#include <iostream>
using namespace std;

void print(int A[], int n)
{
    for (int i = 0; i < 4; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[4] = {100, 100, 100, 100};
    int B[4];
    int C[4];
    int index_incr = 1;

    for (int i = 0; i < 4; i++)
    {
        B[i] = A[i];
    }
    // for sorting
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (A[i] > A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }



    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (B[j] == A[i])
            {
                C[j] = i + index_incr;
            }
        }
    }

    cout << " A = " << endl;
    print(A, 4);

    cout << " B = " << endl;
    print(B, 4);

    cout << " C = " << endl;
    print(C, 4);
}