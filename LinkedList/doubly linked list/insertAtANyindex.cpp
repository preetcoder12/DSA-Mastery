#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_start(node *&head, node *&tail, int n)
{
    node *temp = new node(n);

    if (head == NULL) // If list is empty, update both head and tail
    {
        head = tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_At_End(node *&head, node *&tail, int n)
{
    node *temp = new node(n);
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

void insert_at_middle(node *&head, node *&tail, int n, int pos)
{
    node *temp = new node(n);

    // Case 1: If list is empty or position is 0, insert at start
    if (head == NULL || pos == 0)
    {
        insert_at_start(head, tail, n);
        return;
    }

    // Case 2: Traverse to the specified position
    node *temp1 = head;
    int count = 0;

    while (temp1 != nullptr && count < pos)
    {
        temp1 = temp1->next;
        count++;
    }

    // If position is beyond the length, insert at the end
    if (temp1 == nullptr)
    {
        insert_At_End(head, tail, n);
        return;
    }

    // Case 3: Insert at the middle, update pointers
    node *temp2 = temp1->prev; // Previous node of the target position

    // Adjust the links
    temp2->next = temp;
    temp->prev = temp2;
    temp->next = temp1;
    temp1->prev = temp;
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
    node *head = NULL; // Initialize head and tail properly
    node *tail = NULL;

    // Insert elements
    insert_at_start(head, tail, 8);
    insert_at_start(head, tail, 5);
    insert_At_End(head, tail, 11);
    insert_at_middle(head, tail, 99, 1);

    // Print list
    printlist(head);

    // Cleanup memory
    node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
