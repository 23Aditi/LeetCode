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
    void inorder(TreeNode* node, int& ele,int& k){
        if(!node) return;
        inorder(node->left,ele,k);
        k--;
        if(k==0){ele = node->val;return;}
        inorder(node->right,ele,k); 
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* node = root;
        int ele = -1;
        int num = k;
        inorder(node,ele,num);
        return ele;
    }
};