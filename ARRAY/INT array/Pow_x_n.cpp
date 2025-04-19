#include <bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    long long N = n;
    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }
    double ans = 1;
    while (N > 0)
    {
        if (N % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        N = N / 2;
    }
    return ans;
}
int main()
{
    double ans = myPow(2.342, -4);
    cout << "ans is : " << ans << endl;
    return 0;
}