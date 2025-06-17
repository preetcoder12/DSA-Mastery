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
    if (head == NULL)
    {
        head = temp;
        head->next = head;
    }
    else
    {
        node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        temp->next = head;
        last->next = temp;
        head = temp;
    }
}

void printlist(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(Head)" << endl;
}

void deletelist(node *&head)
{
    if (head == NULL)
        return;

    node *current = head;
    node *nextNode = nullptr;

    do
    {
        nextNode = current->next;
        delete current;
        current = nextNode;
    } while (current != head);

    head = NULL;
}

int main()
{
    node *head = NULL;

    insertStart(head, 9);
    insertStart(head, 8);
    insertStart(head, 7);

    printlist(head); // Expected output: 7 -> 8 -> 9 -> (Head)

    deletelist(head);
    printlist(head);
    return 0;
}
