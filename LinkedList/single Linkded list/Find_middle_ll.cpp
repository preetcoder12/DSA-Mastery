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

int count(node *&head)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

node *findMiddle(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    int cnt = count(head);
    cout << "count is : " << cnt << endl;

    int pos = cnt / 2;
    cout << "Middle position is: " << pos << endl;

    node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }
    return temp;
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
    insertEnd(head, 12);
    printlist(head);

    node *mid = findMiddle(head);
    cout << "Middle Node: " << mid->data << endl;

    deletelist(head);
    return 0;
}