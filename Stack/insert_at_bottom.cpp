#include <iostream>
#include <stack>
using namespace std;

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> st2;
    cout << "enter the value to insert at the end of stack " << endl;
    cin >> x;
    cout << " ______removed stack 2 elements_________ " << endl;
    st2.push(x);
    while (!myStack.empty())
    {
        int ele = myStack.top();
        cout << ele << endl;
        st2.push(ele);
        myStack.pop();
    }
    cout << " ___stack 2 elements____" << endl;

    while (!st2.empty())
    {
        int ele = st2.top();
        cout << ele << endl;
        st2.pop();
    }
}

int main()
{
    stack<int> myStack;
    int x;

    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
;

    pushAtBottom(myStack, 99);
}