// Link to the problem : https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3378/

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> Q;
        if(!root)
            return result;
        Q.push(root);
        while(!Q.empty()) {
            int n = Q.size();
            vector<int> nodes(n);
            for(int i = 0; i < n; i++) {
                TreeNode* x = Q.front();
                Q.pop();
                nodes[i] = x->val;
                if(x->left)
                    Q.push(x->left);
                if(x->right)
                    Q.push(x->right);
            }
            result.push_back(nodes);   
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
