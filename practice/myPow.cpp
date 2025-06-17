#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    double ans = 1.0;
    int N = -n;
    if (x == 0)
    {
        return 0;
    }

    while (x > 1)
    {
        if (n >= 0)
        {
            for (int i = 1; i <= n; i++)
            {
                ans = ans * x;
            }
        }
        else
        {
            ans = 1 / myPow(x, N);
        }
    }

    return ans;
}

int main()
{
    double ans = myPow(2, 10);

    cout << fixed;
    cout.precision(5);
    cout << ans << endl;
    return 0;
}
