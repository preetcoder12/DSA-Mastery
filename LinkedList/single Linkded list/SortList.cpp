#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};

class Solution
{
private:
    ListNode *getMid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = nullptr;

        while (fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev)
            prev->next = nullptr;
        return slow;
    }

    ListNode *merge(ListNode *left, ListNode *right)
    {
        if (!left)
            return right;
        if (!right)
            return left;

        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;

        while (left && right)
        {
            if (left->val < right->val)
            {
                curr->next = left;
                left = left->next;
            }
            else
            {
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }

        if (left)
            curr->next = left;
        if (right)
            curr->next = right;

        ListNode *sortedHead = dummy->next;
        delete dummy;
        return sortedHead;
    }

public:
    ListNode *sortList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *mid = getMid(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);

        return merge(left, right);
    }
};

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Driver Code
int main()
{
    ListNode *head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution sol;
    head = sol.sortList(head);

    printList(head);
}
