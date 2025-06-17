#include <iostream>
using namespace std;

void sayName(int n)
{
    if (n == 0)
    {
        return ;
    }
    int ans = n % 10;
    sayName(n / 10);

    if (ans == 0)
    {
        cout << "zero" << " ";
    }
    else if (ans == 1)
    {
        cout << "one" << " ";
    }
    else if (ans == 2)
    {
        cout << "two" << " ";
    }
    else if (ans == 3)
    {
        cout << "three" <<  " ";
    }
    else if (ans == 4)
    {
        cout << "four" <<  " ";
    }
    else if (ans == 5)
    {
        cout << "five" << " ";
    }
    else if (ans == 6)
    {
        cout << "six" << " ";
    }
    else if (ans == 7)
    {
        cout << "seven" << " ";
    }
    else if (ans == 8)
    {
        cout << "eight" << " ";
    }
    else if (ans == 9)
    {
        cout << "nine" << " ";
    }
}

int main()
{
    int n = 324;
    sayName(n);
}