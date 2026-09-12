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
    bool func(TreeNode* root1, TreeNode* root2){
        if(root1==NULL&& root2==NULL)return true;
        else if(root1==NULL||root2==NULL)return false;
        else if(root1->val!=root2->val)return false;
        bool r1=func(root1->left,root2->left);
        bool r2=func(root1->right,root2->right);
        return r1 && r2;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==NULL)return true;
        if(root==NULL)return false;
        bool left=isSubtree(root->left,subRoot);
        bool right=isSubtree(root->right, subRoot);
        bool curr =func(root,subRoot);
        return curr||left||right;
    }
};