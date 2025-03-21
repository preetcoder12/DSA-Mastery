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
}
int main()
{
    node *n1 = new node(10);
    cout << "data :" << n1->data << endl;
    cout << "next address :" << n1->next << endl;
    insert_at_start(n1, 5);
    insert_at_start(n1, 8);
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