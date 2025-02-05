#include <iostream>
#include <stack>
using namespace std;

void sortInsert(stack<int> &stack, int top)
{
    if (stack.empty() || (!stack.empty() && stack.top() < top))
    {
        stack.push(top);
        return;
    }
    int n = stack.top();
    stack.pop();

    sortInsert(stack , top);
    stack.push(n);
    
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int top = stack.top();
    stack.pop();
    sortStack(stack);

    sortInsert(stack, top);
}

int main()
{
    stack<int> stack;
    stack.push(3);
    stack.push(6);
    stack.push(1);
    stack.push(45);
    stack.push(34);
}