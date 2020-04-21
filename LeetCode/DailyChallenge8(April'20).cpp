//Link to the problem: https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3290/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p=NULL,*q=NULL;
        p=head;
        q=p;
        while(q->next!=NULL && q->next->next!=NULL){
            p=p->next;
            q=q->next->next;
        }
        if(q->next==NULL){
            return p;  
        }
        else{
            return p->next;
        }
        return p;
    }
};

