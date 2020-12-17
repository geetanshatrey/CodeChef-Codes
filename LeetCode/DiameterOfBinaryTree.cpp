// Link to the problem : https://leetcode.com/problems/diameter-of-binary-tree/
// Problem Name :  Diameter of Binary Tree

class Solution {
    int m = INT_MIN;
public:
    int calculate(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        int x = calculate(root->left);
        int y = calculate(root->right);
        if(x + y + 1 > m) {
            m = x + y + 1;
        }
        return max(x,y) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        calculate(root);
        return m-1;
    }
};
