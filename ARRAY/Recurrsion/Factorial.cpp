#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2 * power(n - 1);
    }
}
void count(int n)
{
    if (n == 0)
    {
        return;
    }
    count(n - 1);
    cout << n << endl;
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "Factorial of " << n << " is " << ans << endl;
    int ans2 = power(n);
    cout << "2 raise to 10power of " << n << " is " << ans2 << endl;
    count(n);
    int ans3 = sum(n);
    cout << "Sum is : " << ans3 << endl;
}