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
    vector<int> rightSideView(TreeNode* root) {
       vector<int> result;
       if(!root) return result;
       queue<TreeNode*> q;
       q.push(root);
       while(!q.empty()){
           int size = q.size();
           result.push_back(q.back()->val);
           for(int i=0;i<size;i++){
               TreeNode* temp = q.front();
               q.pop();
               if(temp ->left) q.push(temp->left);
               if(temp ->right) q.push(temp ->right);
               
           }
       } 
        return result;
    }
};
