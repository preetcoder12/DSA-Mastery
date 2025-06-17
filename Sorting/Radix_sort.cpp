#include <iostream>
using namespace std;

void sort(int B[], int A[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (B[i] < B[j])
            {
                swap(B[i], B[j]);
                swap(A[i], A[j]);
            }
        }
    }
}

void radix(int A[])
{
    int B[5];
    int j = 0;
    int unit;
    for (int i = 0; i < 5; i++)
    {
        unit = A[i] % 10;
        B[j] = unit;
        j++;
        
    }
    sort(B, A);
}

int main()
{
    int A[5] = {54, 67, 34, 745, 45};
    radix(A);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}