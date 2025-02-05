#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertStart(node *&head, int d)
{
    node *temp = new node(d);
    if (head != NULL)
    {
        head->prev = temp;
    }
    temp->next = head;
    head = temp;
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
    node *head = NULL;

    insertStart(head, 12);
    insertStart(head, 15);
    insertStart(head, 110);
    insertStart(head, 14);
    print(head);
}