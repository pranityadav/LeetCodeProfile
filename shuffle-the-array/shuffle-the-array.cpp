class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer;
        for(int i=0, j=n; i<n; i++, j++){
            answer.push_back(nums[i]);
            answer.push_back(nums[j]);
        }
        return answer;
    }
};