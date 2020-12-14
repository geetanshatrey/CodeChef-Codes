// Link to the problem : https://leetcode.com/problems/palindrome-linked-list/
// Problem Name : Palindrome Linked List
// Technique : Recursion

class Solution {
    ListNode *ptr;
public:
    bool recursiveCheck(ListNode *curr) {
        if(curr != NULL) {
            if(recursiveCheck(curr->next) == NULL)
                return false;
            if(curr->val != ptr->val)
                return false;
            ptr = ptr -> next;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        ptr = head;
        return recursiveCheck(head);
    }
};
