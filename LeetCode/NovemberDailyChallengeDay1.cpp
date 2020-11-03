// Link to the problem : https://leetcode.com/explore/featured/card/november-leetcoding-challenge/564/week-1-november-1st-november-7th/3516/
// Problem Name : Convert Binary Number in a Linked List to Integer
// Solution Method : Linked List traversal + Strings

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
    int getDecimalValue(ListNode* head) {
        ListNode *ptr = head;
        string s;
        while(ptr != NULL) {
            if(ptr->val == 1)
                s += "1";
            else
                s += "0";
            ptr = ptr->next;
        }
        int res = 0, l = 0, val = 1;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(s[i] == '1') {
                res += val;
            }
            val = val * 2;
        }
        return res;
    }
};
