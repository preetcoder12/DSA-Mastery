#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "(a+c*b)+(c))";
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool randundant = true;
                while (!st.empty() && st.top() != '(')
                {

                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '/' || top == '*')
                    {
                        randundant = false;
                    }
                    st.pop();
                }
                if (!st.empty())
                {
                    st.pop();
                }
                if (randundant == true)
                {
                    return true;
                    st.pop();
                }
            }
        }
    }
    return false;
}
