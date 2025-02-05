#include <iostream>
#include <math.h>
using namespace std;

void get_array(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
}
long long int binary_Search(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (n > square)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;

    cout << "enter the value to find square root : " << endl;
    cin >> n;
    int *A = new int[n];

    int square_rot = static_cast<int>(sqrt(n));
    get_array(A, n);
    cout << square_rot << endl;

    int index = binary_Search(n);

    if (index != -1)
    {
        cout << "the square root is at index " << index << endl;
    }
    else
    {
        cout << "the square root is not present " << endl;
    }
}