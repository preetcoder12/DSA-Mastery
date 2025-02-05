#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {

        this->size = size;
        arr = new int[size];
        top = -1;
    }
    //..............................................................................
    void push(int element)
    {
        if (!isFull())
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    //..............................................................................
    bool isEmpty()
    {
        return top == -1;
    }
    //..............................................................................

    bool isFull()
    {
        return top == size - 1;
    }
    //..............................................................................
    void pop()
    {
        if (!isEmpty())
        {
            top--;
        }
        else
        {
            cout << "stack underflow " << endl;
        }
    }
    int peek()
    {
        if (!isEmpty())
        {
            return arr[top];
            top--;
        }
        else
        {
            cout << "stack underflow " << endl;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.pop(); 
    s.pop(); 
    s.pop(); 


    return 0;
}