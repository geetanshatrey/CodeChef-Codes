//Link to the problem: https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=NULL,*start=NULL;
        int car=0,tar=0;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val+l2->val+car<10){
                if(start==NULL){
                    l3=new ListNode();
                    start=l3;
                }
                else{
                    l3->next=new ListNode();
                    l3=l3->next;
                }
                l3->val=l1->val+l2->val+car;
                l1=l1->next;
                l2=l2->next;
                car=0;
            }
            else{
                if(start==NULL){
                    l3=new ListNode();
                    start=l3;
                }
                else{
                l3->next=new ListNode();
                l3=l3->next;
                }
                tar=l1->val+l2->val+car;
                car=tar/10;
                tar=tar%10;
                l3->val=tar;
                l1=l1->next;
                l2=l2->next;
            }
        }
        if(l1!=NULL){
            while(l1!=NULL){
                l3->next=new ListNode();
                l3=l3->next;
                if(l1->val+car<10){
                    l3->val=l1->val+car;
                    car=0;
                }
                else{
                    tar=l1->val+car;
                    car=tar/10;
                    tar=tar%10;
                    l3->val=tar;
                }
                l1=l1->next;
            }
        }
        else if(l2!=NULL){
            while(l2!=NULL){
                l3->next=new ListNode();
                l3=l3->next;
                if(l2->val+car<10){
                    l3->val=l2->val+car;
                    car=0;
                }
                else{
                    tar=l2->val+car;
                    car=tar/10;
                    tar=tar%10;
                    l3->val=tar;
                }
                l2=l2->next;
            }   
        }
        if(car!=0){
            l3->next=new ListNode();
            l3=l3->next;
            l3->val=car;
            car=0;
        }
        l3->next=NULL;
        l3=start;
        return l3;
    }
};
