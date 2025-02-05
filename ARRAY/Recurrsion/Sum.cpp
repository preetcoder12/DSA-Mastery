#include <iostream>
using namespace std;
int sum_array(int A[], int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return A[0]+sum_array(A+1,n-1);
    }
}

int main()
{
    int A[6] = {2, 2, 4, 6, 5, 7};
    cout << sum_array(A, 6) << endl;
}