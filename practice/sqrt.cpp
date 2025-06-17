#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int low = 1;
    int high = n;
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long square = (long long)mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 9999999;
    cout << floorSqrt(n) << endl;
    return 0;
}