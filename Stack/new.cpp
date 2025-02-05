#include <iostream>
using namespace std;
#include <stack>

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout <<"top element is "<< s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "size of stack is " << s.size() << endl;
    s.pop();
    cout << "after poping one time top element is " << s.top() << endl;
}