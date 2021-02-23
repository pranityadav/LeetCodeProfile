class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> map(101,0);
        int count = 0;
        for(int n:nums){
            
                count += map[n];
                map[n]++;
           
        }
        return count;
    }
};