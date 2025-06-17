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

node *detectloop(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

node *removeLoop(node *head)
{
    node *meetpoint = detectloop(head);
    if (!meetpoint)
    {
        return head;
    }
    node *start = head;
    if (meetpoint == head)
    {
        while (meetpoint->next != head)
        {
            meetpoint = meetpoint->next;
        }
    }
    else
    {
        while (start->next != meetpoint->next)
        {
            start = start->next;
            meetpoint = meetpoint->next;
        }
    }
    meetpoint->next = NULL;
    return head;
}
