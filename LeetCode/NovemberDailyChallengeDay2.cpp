// Link to the problem : https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3517/
// Problem Name : Insertion Sort List


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *p, *q, *l;
        l = NULL;
        p = head;
        if(p == NULL) {
            return NULL;
        }
        q = p -> next;
        while(q != NULL) {
            p = head;
            l = NULL;
            while(p -> next != q) {
                if(p->val <= q->val && p->next->val > q->val) {
                    l = p;
                } 
                if(p->val > q->val && l == NULL) {
                    l = p;
                }
                p = p->next;
            }
            if(l == NULL) {
                l = p;
            }
            if(l == head) {
                if(l->val > q->val) {
                    ListNode *temp = new ListNode();
                    temp->val = q->val;
                    temp->next = l;
                    head = temp;
                }
                else {
                    ListNode *temp = new ListNode();
                    temp->val = q->val;
                    temp->next = l->next;
                    l->next = temp;
                }
            }
            else {
                ListNode *temp = new ListNode();
                temp->val = q->val;
                temp->next = l->next;
                l->next = temp; 
            }
            while(p -> next != q) {
                p = p->next;
            }
            p->next = q->next;
            delete(q);
            q = p->next;
        }
        return head;
    }
};
