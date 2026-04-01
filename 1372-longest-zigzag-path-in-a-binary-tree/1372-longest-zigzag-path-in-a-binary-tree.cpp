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
    int maxi = 0;
    void inorder(TreeNode* root, int len , bool cameFromLeft){ 
        //cameFromLeft means root came from left
        if(!root) return;
        maxi = max(maxi,len);
        if(cameFromLeft){
            inorder(root->right,len+1,false);
            inorder(root->left,1,true);
        }else{
            inorder(root->left,len+1,true);
            inorder(root->right,1,false);
        }
    }
public:
    int longestZigZag(TreeNode* root) {
        if(!root) return 0;
        if(!root->left && !root->right) return 0;
        inorder(root,0,0);
        inorder(root,0,1);
        return maxi;
    }
};