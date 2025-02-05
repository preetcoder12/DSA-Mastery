#include <iostream>
using namespace std;
#include <vector>

bool check(int A[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i - 1] < A[i])
        {
            count++;
        }
    }
    if (A[n - 1] > A[0])
    {
        count++;
    }
    return count == 1;
}

int main()
{
    int A[5] = {3, 4, 5, 1, 2};
    check(A, 5);
    
}