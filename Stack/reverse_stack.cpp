#include <iostream>
using namespace std;
#include <stack>
int main()
{
    string str = "Eren yeager";
    stack<char> st;
    for (int i =0; i <= str.length(); i++)
    {
        char ch = str[i];
        st.push(ch);
    }
    string ans = "";
    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout << ans << endl;
}