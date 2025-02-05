#include <iostream>
using namespace std;
int main()
{
    int A[5] = {4, 7, 32, 7, 6};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i] > A[j])
            {
                swap(A[i], A[j]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}