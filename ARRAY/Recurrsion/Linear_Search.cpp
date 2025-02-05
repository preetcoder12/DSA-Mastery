#include <iostream>
using namespace std;

bool linearSearch(int A[], int n, int k)
{
    if (n == 0)
    {
        return false;
    }
 
    else if (A[0] == k)
    {
        return true;
    }
    else
    {
        return linearSearch(A + 1, n - 1, k);
    }
}

int main()
{
    int A[6] = {1, 2, 4, 6, 9, 5};
    cout << linearSearch(A, 6, 5) << endl;
}