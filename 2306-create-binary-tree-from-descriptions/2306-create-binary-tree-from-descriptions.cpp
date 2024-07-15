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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> umap;
        set<int> childNodes;
        
        for(auto desc: descriptions){
            childNodes.insert(desc[1]);
            if(umap.find(desc[0]) == umap.end()){
                TreeNode* newNode1 = new TreeNode(desc[0]);
                umap[desc[0]] = newNode1;
            }
            if(umap.find(desc[1]) == umap.end()){
                TreeNode* newNode2 = new TreeNode(desc[1]);
                umap[desc[1]] = newNode2;
            }
            TreeNode* parentNode = umap[desc[0]];
            TreeNode* childNode = umap[desc[1]];
            if(desc[2] == 1){   
                parentNode->left = childNode;
            }
            else{
                parentNode->right = childNode;
            }
        }
        TreeNode* root = NULL;
        for(auto u: umap){
            if(childNodes.find(u.first) == childNodes.end()){
                root = umap[u.first];
            }

        }

        return root;
        
    }
};