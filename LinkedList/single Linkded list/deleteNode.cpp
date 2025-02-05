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

void deleteNode(node *&head, int position)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    int count = 1;
    node *temp = head;
    while (count < position - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        cout << "out of bound" << endl;
    }
    node *deletenode = temp->next;
    temp->next = deletenode->next;
    delete deletenode;
    return;
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

    InsertAtHead(head, 9);
    InsertAtHead(head, 8);
    InsertAtHead(head, 7);
    InsertAtHead(head, 1);

    deleteNode(head, 3);
    deleteNode(head, 3);



    print(head);
}