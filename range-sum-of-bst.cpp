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
   int result=0;
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
     if(!root) return 0;      
     helper(root, L, R); 
     return result; 
    }
​
   void helper( TreeNode* node, int L, int R){
     if(!node) return;
     
     helper(node->left, L, R);
     
     if(L<= node->val && node->val <=R)
       result += node->val;
     
    
      helper(node->right, L, R);
   } 
};
