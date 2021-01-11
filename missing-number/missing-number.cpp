class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int index =0;
        int temp =0;
        while(index <nums.size()){
            if(nums[index] < nums.size() && nums[index] != index){
                temp = nums[nums[index]];
                nums[nums[index]] = nums[index];
                nums[index]=temp;
                
                
            }
            else
                ++index;
        }
        for(int i =0; i<nums.size();i++){
            if(i != nums[i])
                return i;
        }
        return nums.size();
    }
};
