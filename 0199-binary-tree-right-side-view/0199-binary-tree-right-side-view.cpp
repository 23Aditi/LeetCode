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
    void rightView(TreeNode* node,int level, vector<int>& vec){
        if(!node) return;
        if(level==vec.size()){
            vec.push_back(node->val);
        }
        rightView(node->right,level+1,vec);
        rightView(node->left,level+1,vec);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        rightView(root,0,vec);
        return vec;
    }
};