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
    void inorder(TreeNode* root, int depth , vector<int>& result){
        if(!root) return;
        if(result.size()==depth){
            result.push_back(root->val);
        }
        inorder(root->right,depth+1,result);
        inorder(root->left,depth+1,result);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        inorder(root,0,result);
        return result;
    }
};