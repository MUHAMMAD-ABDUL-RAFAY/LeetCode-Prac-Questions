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
    bool checkTree(TreeNode* root) {
        if(!root)
            return true;
        if(root->right != NULL && root->left != NULL)
            return root->val == root->right->val + root->left->val;
        if(root->right == NULL)
            return root->val == root->right->val;
        if(root->left == NULL)
            return root->val == root->left->val;
        return false;
    }
};