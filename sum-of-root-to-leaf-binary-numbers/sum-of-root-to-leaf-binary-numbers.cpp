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
    int totalSum=0;
    int sumRootToLeaf(TreeNode* root) {
        int c_sum = 0;
        if(root==nullptr) return 0;
        preorder(root, 0);
        return totalSum;
    }
    void preorder(TreeNode* root, int cur_sum){
        if(root==nullptr) return;
        cur_sum = cur_sum*2 + root->val;
        if(root->left==nullptr && root->right == nullptr) totalSum+=cur_sum;
        preorder(root->left, cur_sum);
        preorder(root->right, cur_sum);
    }
};