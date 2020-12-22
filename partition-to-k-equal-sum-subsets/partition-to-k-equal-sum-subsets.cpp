class Solution {
public:
    bool helper(vector<int> &nums, int n, int target, int sum, int k, vector<bool> &visited){
        if(k == 1)
            return true;
​
        if(n < 0 || sum < 0)
            return false;
​
        if(sum == 0){
            return helper(nums, nums.size()-1, target, target, k-1, visited);
        }
​
        bool flag;
        if(nums[n] > sum || visited[n])
            return helper(nums, n-1, target, sum, k, visited);
        else{
            visited[n] = true;
            flag = helper(nums, n-1, target, sum-nums[n], k, visited);
​
            visited[n] = false;
            flag = flag || helper(nums, n-1, target, sum, k, visited);
        }
​
        return flag;
    }
​
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(auto &i:nums)
            sum += i;
​
        if(sum%k == 0){
            int target = sum/k;
            sort(nums.begin(), nums.end());
            vector<bool> visited(nums.size(), false);
            return helper(nums, nums.size()-1, target, target, k, visited);
        }
        else
            return false;
    }
};
