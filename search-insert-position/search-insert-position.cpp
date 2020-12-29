class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int leftSide = 0; 
        int rightSide = nums.size(); 
        
        while (leftSide < rightSide) {
            int mid = (leftSide + rightSide) / 2; 
            if (nums[mid] == target)
                return mid; 
            if (nums[mid] < target)
                leftSide = mid + 1; 
            if (nums[mid] > target)
                rightSide = mid; 
        }
        return leftSide; 
    }
};
