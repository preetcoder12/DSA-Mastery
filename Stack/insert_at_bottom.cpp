#include <iostream>
#include <stack>
using namespace std;

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> st2;

    while (!myStack.empty())
    {
        st2.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while (!st2.empty())
    {
        myStack.push(st2.top());
        st2.pop();
    }
    return myStack;
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> myStack;
    int x;

    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    printStack(myStack);
    pushAtBottom(myStack, 99);
    printStack(myStack);
}