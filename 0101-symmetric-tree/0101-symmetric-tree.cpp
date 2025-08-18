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
    bool isMirror(TreeNode* p , TreeNode* q){
        if(!p || !q){
            return p==q;
        }
        return (p->val == q->val) && isMirror(p->left,q->right) && isMirror(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;
        if(!root->left && !root->right) return 1;
        return isMirror(root->left,root->right);
    }
};