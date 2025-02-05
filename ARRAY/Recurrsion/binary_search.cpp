#include <iostream>
using namespace std;
int binarySearch(int A[], int s, int e, int k)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;

    if (A[mid] == k)
    {
        return mid;
    }
    else if (A[mid] > k)
    {
        return binarySearch(A, s, mid - 1, k);
    }
    else
    
    {
        return binarySearch(A, mid + 1, e, k);
    }
}
int main()
{
    int A[6] = {1, 2, 4, 6, 9, 5};
    cout << binarySearch(A, 0, 5, 3) << endl;
    cout << binarySearch(A, 0, 5, 9) << endl;
    cout << binarySearch(A, 0, 5, 7) << endl;
    return 0;
}