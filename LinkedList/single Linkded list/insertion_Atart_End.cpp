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

void InsertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
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

int main()
{
    node *n = new node(10);
    node *head = n;
    node *tail = n;

    InsertAtHead(head, 9);
    InsertAtHead(head, 8); // as new node is adding at starting so ans would be [ 15 14 13 12 ]
    InsertAtHead(head, 7);


    InsertAtTail(tail, 9);
    InsertAtTail(tail, 8);
    InsertAtTail(tail, 7);
    print(head);
}