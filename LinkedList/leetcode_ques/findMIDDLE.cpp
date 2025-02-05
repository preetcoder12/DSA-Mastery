

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtMiddle(node *&head, int d, int position)
{
    node *temp = head;
    int cnt = 1;
    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }
    node *temp2 = new node(d);
    temp2->next = temp->next;
    temp->next = temp2;
}

int getlength(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count += 1;
        temp = temp->next;
    }
    return count;
}

void InsertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *MIDDLE(node *head)
{
    int length = getlength(head);

    node *traverse = head;
    int mid = (length / 2);
    for (int i = 1; i < mid; i++)
    {
        traverse = traverse->next;
    }
    return traverse;
}

int main()
{
    node *n = new node(10);
    node *tail = n;
    node *head = n;
    node *mid = n;
    InsertAtTail(tail, 8);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 2);
    InsertAtMiddle(head, 99, 3);
    InsertAtMiddle(head, 97, 3);
    InsertAtMiddle(head, 37, 1);
    print(head);
    int length = getlength(head);
    cout << "length : " << length << endl;

    node *middle = MIDDLE(head);
    if (middle != NULL)
    {
        cout << "middle node data : " << middle->data << endl;
    }
    else
    {
        cout << "list is empty" << endl;
    }
}
