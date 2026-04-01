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
    void inorder(TreeNode* root, int& targetSum , long long& current_sum , 
    unordered_map<long long,int>& um ,int& ct){
        if(!root) return;
        current_sum += root->val;
        if(um.find(current_sum-targetSum)!=um.end()){ct+=um[current_sum-targetSum];}
        um[current_sum]++;
        inorder(root->left,targetSum,current_sum,um,ct);
        inorder(root->right,targetSum,current_sum,um,ct);
        um[current_sum]--;
        current_sum -=root->val;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        long long current_sum = 0;
        unordered_map<long long,int> um;
        int ct = 0;
        um[0]=1;
        inorder(root,targetSum,current_sum,um,ct);
        return ct;
    }
};