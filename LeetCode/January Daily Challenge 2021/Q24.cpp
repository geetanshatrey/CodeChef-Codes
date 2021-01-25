// Link to the problem : https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/582/week-4-january-22nd-january-28th/3615/
// Problem Name : Merge k Sorted Lists

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <int, vector<int>, greater<int>> pq;
        ListNode *ptr, *head = NULL;
        for(int i = 0; i < lists.size(); i++) {
            while(lists[i] != NULL) {
                pq.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        while(pq.empty() == false) {
            if(head == NULL) {
                head = new ListNode();
                head->val = pq.top();
                ptr = head;
            }
            else {
                ptr->next = new ListNode();
                ptr = ptr -> next;
                ptr->val = pq.top();
            }
            pq.pop();
        }
        ptr->next = NULL;
        return head;
        
    }
};
