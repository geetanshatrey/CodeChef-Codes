// Link to the problem : https://leetcode.com/problems/remove-linked-list-elements/
// Problem Name : Remove Linked List Elements

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ptr;
        ptr = head;
        if(head == NULL)
            return head;
        while(head != NULL && head->val == val) {
            ListNode *temp;
            temp = head;
            if(ptr->next == NULL)
                head = NULL;
            else {
                head = ptr->next;
            }
            ptr = head;
            delete(temp);
        }
        if(head == NULL)
            return head;
        while(ptr != NULL && ptr->next != NULL) {
            if(ptr->next->val == val) {
                ListNode *temp;
                temp = ptr->next;
                if(temp->next == NULL) {
                    ptr->next = NULL;
                }
                else {
                    ptr->next = temp->next;
                }
                delete(temp);
            }
            else {
                ptr = ptr->next;
            }
        }
        return head;
    }
};
