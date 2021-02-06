// Link to the problem : https://leetcode.com/explore/challenge/card/february-leetcoding-challenge-2021/584/week-1-february-1st-february-7th/3630/
// Problem Name : Binary Tree Right Side View

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    
    void helper(TreeNode* root, int level) {
        if(level == res.size()) {
            res.push_back(root->val);
        } 
        
        if(root->right != NULL) {
            helper(root->right, level + 1);
        }
        
        if(root->left != NULL) {
            helper(root->left, level + 1);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) {
            return res;
        }
        helper(root,0);
        return res;
    }
};
