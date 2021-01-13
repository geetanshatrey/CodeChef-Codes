// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3601/
// Problem Name : Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr, *head = NULL;
        int c = 0;
        while(l1 != NULL && l2 != NULL) {
            if(head == NULL) {
                head = new ListNode();
                ptr = head;
            }
            else {
                ptr->next = new ListNode();
                ptr = ptr -> next;
            }
            ptr->val = (l1->val + l2->val + c) % 10;
            c = (l1->val + l2->val + c) / 10;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        while(l1 != NULL) {
            if(head == NULL) {
                head = new ListNode();
                ptr = head;
            }
            else {
                ptr->next = new ListNode();
                ptr = ptr -> next;
            }
            ptr->val = (l1->val + c) % 10;
            c = (l1->val + c) / 10;
            l1 = l1 -> next;
        }
        while(l2 != NULL) {
            if(head == NULL) {
                head = new ListNode();
                ptr = head;
            }
            else {
                ptr->next = new ListNode();
                ptr = ptr -> next;
            }
            ptr->val = (l2->val + c) % 10;
            c = (l2->val + c) / 10;
            l2 = l2 -> next;
        }
        if(c != 0) {
            if(head == NULL) {
                head = new ListNode();
                ptr = head;
            }
            else {
                ptr->next = new ListNode();
                ptr = ptr -> next;
            }
            ptr->val = c;
        }
        return head;
    }
};

