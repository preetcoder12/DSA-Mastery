#include <iostream>
using namespace std;

bool sorted_or_not(int A[], int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else if (A[0] > A[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = sorted_or_not(A + 1, n - 1);
        return remainingPart;
    }
}

int main()
{
    int A[6] = {1, 2, 4, 6, 5, 7};
    cout << sorted_or_not(A, 6) << endl;
}