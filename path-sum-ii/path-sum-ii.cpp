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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> v;
        helper(root, sum,0, v,ans);
        return ans;
    }
    void helper(TreeNode* root, int sum, int cur, vector<int> v, vector<vector<int>>& ans){
        cur += root->val;
        v.push_back(root -> val);
        if(!root -> left && ! root ->right ){
            if(sum == cur){
                ans.push_back(v);
            }
            v.pop_back();
        }
        if(root ->left){
            helper(root->left, sum, cur, v, ans);
        }
        if(root ->right){
            helper(root->right, sum, cur, v, ans);
        }
        v.pop_back();
    }
};
