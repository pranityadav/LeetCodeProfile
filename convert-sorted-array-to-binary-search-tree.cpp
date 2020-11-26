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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
    TreeNode* helper(vector<int> nums, int l, int r){
        if(r < l){
            return NULL;
        }
        TreeNode* node = new TreeNode();
        int mid = l + (r - l)/2;
        node -> val = nums[mid];
        node -> left = helper(nums, l, mid-1);
        node -> right =   helper(nums, mid+1, r);
        return node;
    }
};
