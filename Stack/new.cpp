#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    cout << "top element is " << s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    cout << "stack is not empty" << endl;

    cout << "size of stack is " << s.size() << endl;
    s.pop();
    cout << "after poping one time top element is " << s.top() << endl;
}