#include <iostream>
#include <bitset>
using namespace std;

void In_Bits(int A[], int a, int i)
{
    int n = 7;

    if (a == 0 || a == 1)
    {
        A[i] = a;
        return;
    }

    int remainder = a % 2;
    A[i] = remainder;

    In_Bits(A, a / 2, i - 1);
}
int minBitFlips(int start, int goal)
{
    int A1[7] = {0};
    int A2[7] = {0};

    In_Bits(A1, start, 3);
    In_Bits(A2, goal, 3);

    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        if (A1[i] == A2[i])
        {
            i++;
        }
        if (A1[i] > A2[i])
        {
            A2[i] = 1;
            count++;
        }
        if (A1[i] < A2[i])
        {
            A2[i] = 0;
            count++;
        }
    }
    return count;
}
int main()
{

    int A[7] = {0};

    int ans = minBitFlips(7, 10);
    cout << ans << endl;
}