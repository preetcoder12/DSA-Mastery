#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int prefixsum = 0;
        unordered_map<int, ListNode*> prefixmap;
        ListNode* curr = dummy;

        while (curr) {
            prefixsum += curr->val;
            prefixmap[prefixsum] = curr;
            curr = curr->next;
        }
        prefixsum = 0;
        curr = dummy;

        while (curr) {
            prefixsum += curr->val;
            curr->next = prefixmap[prefixsum]->next ;
            curr = curr->next;
        }
        return dummy->next;
    }
};