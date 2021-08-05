class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> ans; 
    int count;
    for(int i =0; i<nums.size();i++){
        count = 0;
        for(int j=0; j <nums.size(); j++){
            if( i == j){
                continue;
            }
            else if(nums[j] < nums[i]){
                count++;
            }
        }
        ans.push_back(count);
    
    }
    return ans;
    }
};



//temp 0 1 2 3 4 5 6 7 8 9 10 .....  
 



//temp 0 1 2 3 4 5 6 7 8 9 10.....
//



// ans 0 1 2 3 4
//
