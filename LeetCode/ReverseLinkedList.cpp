// Link to the problem : https://leetcode.com/problems/reverse-linked-list/
// Problem Name : Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p, *q, *r;
        p = NULL;
        q = NULL;
        r = head;
        while(r != NULL) {
            p = q;
            q = r;
            r = r->next;
            q->next = p;
        }
        return q;
    }
};
