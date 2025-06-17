#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int> &stack, int top_ele)
{
    if (stack.empty())
    {
        stack.push(top_ele);
        return;
    }
    int ele = stack.top();
    stack.pop();
    insert_at_bottom(stack, top_ele);
    stack.push(ele);
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int top_ele = stack.top();
    stack.pop();
    reverseStack(stack);
    insert_at_bottom(stack, top_ele);
}

int main()
{
    stack<int> stack;
    stack.push(4);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);

    reverseStack(stack);
    while (!stack.empty())
    {
        int top = stack.top();
        cout << top << endl;
        stack.pop();
    }
}