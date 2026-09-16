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
    void func(TreeNode* root, int target, int sum, vector<vector<int>>&res, vector<int>temp){
        if(root==NULL)return;
        sum=sum+root->val;
        temp.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==target){
                res.push_back(temp);
                return;
            }
        }
        func(root->left,target, sum, res, temp);
        func(root->right, target, sum, res, temp);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<vector<int>>res;
        vector<int>temp;
        func(root,targetSum, sum, res, temp);
        return res;

    }
};