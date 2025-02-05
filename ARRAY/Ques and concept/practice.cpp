#include <bits/stdc++.h>
using namespace std;

int minimumParentheses(string pattern)
{
    int open = 0;
    int close = 0;
    for (char ch : pattern)
    {
        if (ch == '(')
        {
            open++;
        }
        else if (ch == ')')
        {
            if (open > 0)
            {
                open--;
            }
            else
            {
                close++;
            }
        }
    }
    return open + close;
}

int main()
{
    string s = ")((()";
    cout << minimumParentheses(s) << endl;
}