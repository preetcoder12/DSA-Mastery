#include <iostream>
#include <stack>
using namespace std;

bool matches(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool isValidParenthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if (matches(top, ch))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s = "[()]{}{[()()]()}";
    bool ans = isValidParenthesis(s);
    if (ans)
    {
        cout << "balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
}