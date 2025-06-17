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
void insert_at_start(node *&head, int n)
{
    node *temp = new node(n);
    temp->next = head;
    head = temp;
}

void insert_At_End(node *&head, int n)
{
    node *temp = new node(n);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void insert_at_middle(node *&head, int n, int pos)
{
    node *temp = new node(n);

    if (pos == 0)
    {
        temp->next = head;
        head = temp;
        return;
    }
    node *prev = nullptr;
    node *curr = head;
    int count = 0;
    while (curr != nullptr && count < pos)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (prev != nullptr)
    {
        prev->next = temp;
        temp->next = curr;
    }
}

void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *n1 = new node(10);
    cout << "data :" << n1->data << endl;
    cout << "next address :" << n1->next << endl;
    insert_at_start(n1, 5);
    insert_at_start(n1, 8);
    insert_At_End(n1, 11);
    insert_at_middle(n1, 99, 3);
    printlist(n1);
    node *temp;
    while (n1 != NULL)
    {
        temp = n1;
        n1 = n1->next;
        delete temp;
    }

    return 0;
}
//