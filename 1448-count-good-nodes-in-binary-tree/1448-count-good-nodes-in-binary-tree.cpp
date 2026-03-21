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
    void trav(TreeNode* root, int maxi, int& ct){
        if(!root) return;
        if(root->val>=maxi){ct++; maxi = max(maxi,root->val);}
        trav(root->left,maxi,ct);
        trav(root->right,maxi,ct);
    }
public:
    int goodNodes(TreeNode* root) {
        int ct = 0;
        trav(root,root->val,ct);
        return ct;
    }
};