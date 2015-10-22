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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> s;
        s.push(root);
        

        while(!s.empty()){
            auto p=s.top();
            s.pop();
            if(p==NULL){
                
                continue;
            }
            nodes.push_back(p->val);
        
            s.push(p->right);
            s.push(p->left);
            
        }
        return nodes;
            
    }
};