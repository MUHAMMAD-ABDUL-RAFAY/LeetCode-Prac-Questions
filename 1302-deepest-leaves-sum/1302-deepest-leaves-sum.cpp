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
    
    int calcTreeHeight(TreeNode* root){
        if(!root)
            return 0;
        return 1 + max(calcTreeHeight(root->left),calcTreeHeight(root->right));
    }
    void calcDeepLeavesSum(TreeNode* root,int treeHeight,int& sum){
        if(!root)
            return;
        if(treeHeight == 1 && root->left == NULL && root->right == NULL)
            sum += root->val;
        calcDeepLeavesSum(root->left,treeHeight-1,sum);
        calcDeepLeavesSum(root->right,treeHeight-1,sum);
        
        
        
        
    }
    int deepestLeavesSum(TreeNode* root) {
        int treeHeight = calcTreeHeight(root);
        int sum = 0;
        calcDeepLeavesSum(root,treeHeight,sum);
        return sum;
    }
};