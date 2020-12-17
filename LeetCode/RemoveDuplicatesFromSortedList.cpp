// Link to the problem : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Problem Name : Remove Duplicates from Sorted List

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int x;
        ListNode *ptr;
        if(head == NULL) {
            return head;
        }
        ptr = head;
        x = ptr->val;
        while(ptr != NULL && ptr->next != NULL) {
            if(ptr->next->val == x) {
                ListNode *temp;
                temp = ptr->next;
                if(temp->next == NULL)
                    ptr->next = NULL;
                else
                    ptr->next = temp->next;
                delete(temp);
            }
            else {
                ptr = ptr->next;
                if(ptr != NULL)
                    x = ptr->val;
            }
        }
        return head;
    }
};
