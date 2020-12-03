/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
      vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> result;
        
      queue<TreeNode*> q;
        
      if (!root) 
        return result;
      q.push(root);
        
      while(!q.empty()){
        
        int qsize=q.size();
        vector<int> curr_val;
        for(int i=0;i<qsize;i++){
          TreeNode* temp=q.front();
          q.pop();
           
          if(temp->left) 
             q.push(temp->left);
          
           
          if(temp->right)
             q.push(temp->right);
          
          curr_val.push_back(temp->val);
          
        }
        result.push_back(curr_val);
      }
      return result;
        
    }
};
