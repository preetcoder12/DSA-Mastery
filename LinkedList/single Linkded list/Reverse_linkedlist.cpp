#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    // Write your code here
}
int main()
{
    LinkedListNode*n1 = new LinkedListNode(10);
    printlist(n1);
    LinkedListNode*temp;
    while (n1 != NULL)
    {
        temp = n1;
        n1 = n1->next;
        delete temp;
    }

    return 0;
}