// Link to the problem : https://leetcode.com/explore/challenge/card/september-leetcoding-challenge/554/week-1-september-1st-september-7th/3449/
// Problem Name : All Elements in Two Binary Search Trees
// Solution Method : Tree Traversal + Vector Sort


class Solution {
public:
    vector<int> vals;
    
    void readTree(TreeNode* root) {
        if(root != NULL) {
            vals.push_back(root->val);
            readTree(root->left);
            readTree(root->right);
        }
        else {
            return;
        }
    }    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        readTree(root1);
        readTree(root2);
        sort(vals.begin(),vals.end());
        return vals;
    }
};
