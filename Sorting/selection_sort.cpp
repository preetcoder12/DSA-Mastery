#include <iostream>
using namespace std;
int main()
{
    int A[5] = {20, 12, 34, 456, 546};
    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (A[min] > A[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(A[i], A[min]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}