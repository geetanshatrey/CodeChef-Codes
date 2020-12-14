// Link to the problem : https://leetcode.com/problems/palindrome-linked-list/
// Problem Name : Palindrome Linked List

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        ListNode *ptr;
        ptr = head;
        while(ptr != NULL) {
            res.push_back(ptr->val);
            ptr = ptr->next;
        }
        int n = res.size();
        for(int i = 0; i < n/2; i++) {
            if(res[i] != res[n-i-1]) {
                return false;
            }
        }
        return true;
        
    }
};
