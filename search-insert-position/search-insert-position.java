class Solution {
    public int searchInsert(int[] nums, int target) {
        int index = 0;
        for(int i = 0; i< nums.length; i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i] < target){
                index = i+1;
            }
            else break;
        }
        return index;
    }
}