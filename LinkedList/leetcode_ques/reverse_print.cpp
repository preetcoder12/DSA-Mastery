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

void InsertAtMiddle(node *&head, int d, int position)
{
    node *temp = head;
    int cnt = 1;
    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }
    node *temp2 = new node(d);
    temp2->next = temp->next;
    temp->next = temp2;
}

void InsertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
node *reverseList(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *prev = nullptr;
    node *curr = head;
    while (curr)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
    node *tail = n;
    node *head = n;
    node *mid = n;
    InsertAtTail(tail, 8);
    InsertAtTail(tail, 7);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 2);
    InsertAtMiddle(head, 99, 3);
    InsertAtMiddle(head, 97, 3);
    InsertAtMiddle(head, 37, 1);
    print(head);
    head = reverseList(head);
    print(head);
}
