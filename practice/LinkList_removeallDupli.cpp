#include <iostream>
using namespace std;

struct node
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

void insert(node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        temp->next = head;
        head = temp;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        node *temp2 = new node(d);
        temp2->next = NULL;
        temp->next = temp2;
    }
}

void print_node(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *removeDuplicateSORTED(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *dummy = new node(-1);
    dummy->next = head;

    node *prev = dummy;
    node *curr = head;

    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            while (curr->next != NULL && curr->data == curr->next->data)
            {
                curr = curr->next;
            }
            prev->next = curr->next;
        }
        else
        {
            prev = prev->next;
        }
        curr = curr->next;
    }
    node *newhead = dummy->next;
    delete dummy;
    return newhead;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 2);
    insert(head, 2);
    insert(head, 3);
    print_node(head);
    removeDuplicateSORTED(head);
    print_node(head);
}