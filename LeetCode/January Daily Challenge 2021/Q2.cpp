// Link to the problem : https://leetcode.com/explore/featured/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3590/
// Problem Name : Find a Corresponding Node of a Binary Tree in a Clone of That Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == NULL) {
            return NULL;
        }
        if(original == target) {
            return cloned;
        }
        
        TreeNode* ptr;
        ptr = getTargetCopy(original->left, cloned->left, target);
        if(ptr) 
            return ptr;
        
        TreeNode* qtr;
        qtr = getTargetCopy(original->right, cloned->right, target);
        if(qtr) 
            return qtr;
        
        return NULL;
        
    }
};
