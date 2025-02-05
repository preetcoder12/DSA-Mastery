#include <iostream>
using namespace std;
int main()
{
    int A[5] = {435, 56, 234, 563, 34};
    
    for (int i = 1; i < 5; i++)
    {
        int key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}