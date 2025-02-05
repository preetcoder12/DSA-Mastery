#include <iostream>
using namespace std;

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
    int k = 5;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (A[i] + A[j] == k)
            {
                cout << A[i] << " " << A[j] << endl;
                break;
            }
        }
    }
    return 0;
}