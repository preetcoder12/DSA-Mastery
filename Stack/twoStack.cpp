#include <iostream>
using namespace std;

class stack
{
public:
    int top1;
    int top2;
    int *arr;
    int size;

    stack(int s)
    {
        arr = new int[s];
        this->size = s;
        top1 = -1;
        top2 = s;
    }

    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "Stack overflow " << endl;
        }
    }
    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "Stack overflow " << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            cout << " Stack Underflow" << endl;
            return -1;
        }
    }
    int pop2()
    {
        if (top2 >= 0)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            cout << " Stack Underflow" << endl;
            return -1;
        }
    }
    ~stack()
    {
        delete[] arr; // Free dynamically allocated memory
    }
};

int main()
{
    stack s(5);

    s.push1(10);
    s.push1(20);
    s.push2(30);
    s.push2(40);

    cout << "Popped from stack1: " << s.pop1() << endl;
    cout << "Popped from stack2: " << s.pop2() << endl;

    return 0;
}