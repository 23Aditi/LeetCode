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
//     int maxDepth(TreeNode* root) {
//         vector<vector<int>> levelOrder;
//         if(root==nullptr) return 0;
//         queue<TreeNode*> q;
//         q.push(root);
//         vector<int> rootvec;
//         rootvec.push_back(root->val);
//         levelOrder.push_back(rootvec);
        
//         while(!q.empty()){
//             vector<int> level;
//             int size=q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if(node->left!=nullptr){
//                     q.push(node->left);
//                     level.push_back(node->left->val);
//                 }
//                 if(node->right!=nullptr){
//                     q.push(node->right);
//                     level.push_back(node->right->val);
//                 }
//             }
//             if(!level.empty()){
//                 levelOrder.push_back(level);
//             }
            
//         }
//         return levelOrder.size();
//     }
 
    /*--------------------------    Recursive   ------------------------------*/
    int maxDepth(TreeNode* root) {
        if(!root){return 0;}
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};