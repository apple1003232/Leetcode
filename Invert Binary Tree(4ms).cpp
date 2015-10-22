/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        TreeNode* cur;
        cur = root;
        if(cur->left == NULL && cur->right == NULL)
            return cur;
        
        invertTree(cur->right);
        invertTree(cur->left); 
        TreeNode* t;
        t = cur->left;
        cur->left = cur->right;
        cur->right = t;
            
    }
    
};