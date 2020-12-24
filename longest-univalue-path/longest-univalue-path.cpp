/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
   
public:
 int findlongest(TreeNode* node,int val,int&nodes_num)
    {
        if(node!=nullptr)
        {
            if(node->val==val)
            {
                int l=findlongest(node->left,val,nodes_num);
                int r=findlongest(node->right,val,nodes_num);
                nodes_num=max(nodes_num,l+r+1);
                return max(l,r)+1;
            }
            else
            {
                findlongest(node,node->val,nodes_num);   
                return 0;
            }
        }
        return 0;
        
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int val=root->val;
        int nodes_num=1; //nodes_num
        findlongest(root,val,nodes_num);
        return nodes_num-1; //path lenght =nodes_num-1
    }
};
