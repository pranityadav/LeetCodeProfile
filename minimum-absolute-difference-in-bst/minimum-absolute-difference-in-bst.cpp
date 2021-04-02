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
    
    int getMinimumDifference(TreeNode* root) {
        
           int res=INT_MAX;
            TreeNode*  pre=NULL;
         help(root, res, pre);
        return res;
        }
        void help(TreeNode* node, int &res, TreeNode* &pre_n)
        {
        if(!node) return;    
        help(node->left,res,pre_n);
        if (pre_n!=NULL) res = min(res, node->val - pre_n->val);
        pre_n = node;
        help(node->right,res,pre_n);
    
        }
    
};