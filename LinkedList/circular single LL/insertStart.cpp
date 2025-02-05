#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insert(node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        node *temp = new node(d);
        temp->next = current->next;
        current->next = temp;
    }
}

void print(node *&tail)
{
    

    node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

int main()
{
    node *tail = NULL;
    insert(tail, 1, 3);
    insert(tail, 3, 5);
    print(tail);
}