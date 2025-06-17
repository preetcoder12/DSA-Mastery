#include <bits/stdc++.h>
using namespace std;

int countDigits(int num)
{
    string str = to_string(num);
    unordered_set<char> digits;
    for (char c : str)
    {
        digits.insert(c);
    }
    return digits.size();
}
int countDigits2(int num)
{

    int original = num;
    int cnt = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0 && original % digit == 0)
        {
            cnt++;
        }
        num /= 10;
    }
    return cnt;
}

int main()
{
    int number = 1248;
    cout << countDigits(number) << endl;
    cout << countDigits2(number) << endl;
    return 0;
}