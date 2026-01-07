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
    int totalSum(TreeNode* root){
        if(!root) return 0;
        return totalSum(root->left)+totalSum(root->right)+root->val;
    }
    int dfs(TreeNode* root, long long& sum,long long& maxProd){
        if(!root) return 0;
        long long left = dfs(root->left,sum,maxProd);
        long long right = dfs(root->right,sum,maxProd);
        long long curr = left+right+root->val;
        maxProd = max(maxProd,(sum-curr)*curr);
        return curr;
    }
public:
    int maxProduct(TreeNode* root) {
        long long total = totalSum(root);
        long long maxProd = 0;
        dfs(root,total,maxProd);
        return maxProd%1000000007;
    }
};