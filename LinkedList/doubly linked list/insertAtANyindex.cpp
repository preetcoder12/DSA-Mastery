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

void insertAnyIndex(node *&head, node *&tail, int d, int pos)
{
    int count = 1;
    node *temp2 = head;
    node *temp = new node(d);
    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    if (temp2->next == NULL)
    {
        insertLast(head, tail, d);
    }

    while (count < pos - 1)
    {
        temp2 = temp2->next;
        count++;
    }

    temp->next = temp2->next;
    temp2->next = temp;
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

    insertLast(head, tail, 3);
    insertLast(head, tail, 6);
    insertLast(head, tail, 4);
    insertLast(head, tail, 8);

    insertAnyIndex(head, tail, 2, 1);
    insertAnyIndex(head, tail, 99, 3);

    print(head);
}