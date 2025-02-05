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

void insertLast(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    if (tail == NULL)
    {
       head = tail = temp;
    }
    else
    {

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
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
    node *tail = NULL;
    cout << "insert at end " << endl;
    insertLast(head,tail,3);
    insertLast(head,tail,6);
    insertLast(head,tail,4);
    print(head);
}