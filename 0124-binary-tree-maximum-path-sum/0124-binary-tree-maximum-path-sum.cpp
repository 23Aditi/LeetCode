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
    int height(TreeNode* root , int &maxSum){
        if(!root){return 0;}
        int lh = height(root->left,maxSum);
        int rh = height(root->right,maxSum);
        maxSum = max(maxSum , root->val + lh + rh);
        return root->val + max(lh,rh);
    }
public:
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int maxSum = root->val;
        height(root,maxSum);
        return maxSum;
    }
};