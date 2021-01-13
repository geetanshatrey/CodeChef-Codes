// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3593/
// Problem Name : Remove Duplicates from Sorted List II

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int> res, ans;
        ListNode *ptr;
        ptr = head;
        while(ptr != NULL) {
            res.push_back(ptr->val);
            ptr = ptr -> next;
        }
        sort(res.begin(), res.end());
        int j = -1;
        for(int i = 0; i < res.size(); i++) {
            if(i == res.size() - 1) {
                ans.push_back(res[i]);
                break;
            }
            if(res[i] == res[i+1]) {
                j = i + 1;
                while(j < res.size() && res[i] == res[j]) {
                   j++;
                }
                if(j == res.size()) {
                    break;
                }
                i = j - 1;
            }
            else {
                ans.push_back(res[i]);
            }
        }
        ListNode *qtr, *newHead = NULL;
        int i = 0;
        while(qtr != NULL && i < ans.size()) {
            if(newHead == NULL) {
                newHead = new ListNode();
                newHead->val = ans[i];
                qtr = newHead;
            }
            else {
                qtr->next = new ListNode();
                qtr = qtr->next;
                qtr->val = ans[i];
            }
            if(i == ans.size() - 1)
                qtr->next = NULL;
            i++;
        }
        return newHead;
    }
};
