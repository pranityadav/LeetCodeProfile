class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) return ans;
        vector<string> nums ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        rec(digits,ans,nums,0,"");
        return ans;
        
    }
    void rec(string digits, vector<string> &ans,vector<string> &nums, int i, string s){
        if( i == digits.length()){
            ans.push_back(s);
            return;
        }
        string val = nums[digits[i] - '0'];
        for(int j =0; j<val.size(); j++){
            rec(digits,ans,nums,i+1,s+val[j]);
        }
    }
};
