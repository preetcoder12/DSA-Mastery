#include <bits/stdc++.h>
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

void insertStart(node *&head, int n)
{
    node *temp = new node(n);
    temp->next = head;
    head = temp;
}

void insertEnd(node *&head, int n)
{
    node *temp = new node(n);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}

void printlist(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

node *reverseLinkedList(node *&head)
{
    node *newnode = NULL;
    node *temp = head;

    while (temp != NULL)
    {
        insertStart(newnode, temp->data);
        temp = temp->next;
    }
    return newnode;
}

void deletelist(node *&head)
{
    node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    head = NULL;
}
int main()
{
    node *head = NULL;

    insertStart(head, 9);
    insertStart(head, 8);
    insertStart(head, 7);
    insertEnd(head, 10);

    printlist(head);

    head = reverseLinkedList(head);
    printlist(head);

    deletelist(head);
    return 0;
}