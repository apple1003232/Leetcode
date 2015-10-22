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
    private: vector<int> nodes;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        if(root==NULL)
        return vector<int>();
        s.push(root);
        while(s.size()!=0){
            TreeNode* cur;
            cur = s.top();
            nodes.push_back(cur->val);
            s.pop();
            if(cur->right != NULL)
            s.push(cur->right);
            if(cur->left != NULL)
            s.push(cur->left);
            
        }
        return nodes;
            
    }
};