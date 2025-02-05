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

void removedupli_Unsort(node *head)
{
    if (head == NULL)
    {
        return;
    }

    node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        node *prev = temp;
        node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->data == temp2->data)
            {
                prev->next = temp2->next;
                delete temp2;
                temp2 = prev->next;
            }
            else
            {
                prev = temp2;
                temp2 = temp2->next;
            }
        }
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insert(head, 4);
    insert(head, 2);
    insert(head, 5);
    insert(head, 4);
    insert(head, 2);
    insert(head, 2);
    insert(head, -1);
    print_node(head);
    removedupli_Unsort(head);
    print_node(head);
}