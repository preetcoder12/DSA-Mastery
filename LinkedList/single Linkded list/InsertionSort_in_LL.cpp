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

void printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << ".................................." << endl;
}

node *sortedInsert(node *&sorted, node *newnode)
{
    if (sorted == NULL || sorted->data >= newnode->data)
    {
        newnode->next = sorted;
        return newnode;
    }
    node *current = sorted;
    while (current->next != NULL && current->next->data < newnode->data)
    {
        current = current->next;
    }
    newnode->next = current->next;
    current->next = newnode;
    return sorted;
}

node *insertionSortLL(node *head)
{
    node *sorted = NULL;
    node *current = head;
    while (current != NULL)
    {
        node *nextnode = current->next;
        current->next = NULL;
        sorted = sortedInsert(sorted, current);
        current = nextnode;
    }
    return sorted;
}

int main()
{
    node *n1 = new node(10);

    insert_at_start(n1, 5);
    insert_at_start(n1, 8);
    insert_at_start(n1, 9);
    insert_at_start(n1, 2);
    cout << ".................................." << endl;

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