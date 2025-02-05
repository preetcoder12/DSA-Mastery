#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.push(1);

    cout << "the top element is " << s.top() << endl;
    s.pop();
    cout << "after poping the top element is " << s.top() << endl;
    cout << "size " << s.size() << endl;
    cout << "empty-> " << s.empty() << endl;
}