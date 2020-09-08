// Link to the problem : https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
// Problem Name : Sum of Root To Leaf Binary Numbers
// Solution Method : DFS (PreOrder) + Bitwise Operations

class Solution {
    int rootToLeaf = 0;
public:
    
    void preOrder(TreeNode* root, int currNumber) {
        if(root != NULL) {
            currNumber = (currNumber << 1) | root->val;
            if(root->left == NULL && root->right == NULL) {
                rootToLeaf += currNumber;
            }
            preOrder(root->left, currNumber);
            preOrder(root->right, currNumber);
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        preOrder(root, 0);
        return rootToLeaf;
    }
};
