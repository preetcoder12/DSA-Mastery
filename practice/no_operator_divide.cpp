#include <iostream>
using namespace std;

int divide(int dividend, int divisor)
{

    int count = 0;

    int sign = (divisor < 0) ^ (dividend < 0) ? -1 : 1;

    dividend = abs(dividend);
    divisor = abs(divisor);

    while (dividend >= divisor)
    {
        count++;
        dividend -= divisor;
    }
    return sign * count;
}

int main()
{
    int ans = divide(7, -3);
    cout << ans << endl;
    return 0;
}