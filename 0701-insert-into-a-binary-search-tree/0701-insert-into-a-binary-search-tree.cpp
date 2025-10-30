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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return nullptr;
        TreeNode* newNode = new TreeNode(val);
        TreeNode* node = root;
        while(node->left || node->right){
            if(node->val<val){
                node = node->right;
            }else{
                node=node->left;
            }
        }
        if(node->val<val){
            node->right = newNode;
        }else{
            node->left = newNode;
        }
        return root;
    }
};