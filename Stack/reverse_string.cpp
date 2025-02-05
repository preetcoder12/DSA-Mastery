#include <iostream>
using namespace std;
#include <stack>


int main()
{
    string name = "preet gusain";
    stack<char> n; // stack is n
    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        n.push(ch);
    }
    string ans = " ";
    while (!n.empty())
    {
        char ch = n.top();
        ans.push_back(ch);
        n.pop();
    }
    cout << ans << endl;
}