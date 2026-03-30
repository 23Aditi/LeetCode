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
    void levelOrder(TreeNode* root, vector<int>& result){
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left){q.push(node->left);}
                if(node->right){q.push(node->right);}
                if(i==n-1){
                    result.push_back(node->val);
                }
            }
        }
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if(!root){return result;}
        levelOrder(root,result);
        return result;
    }
};