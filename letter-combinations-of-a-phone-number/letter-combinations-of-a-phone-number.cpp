class Solution {
    vector<string> nums ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     vector<string> ans;
public:
    vector<string> letterCombinations(string digits) {
       
        if(digits.length() == 0) return ans;       
        rec(digits,0,"");
        return ans;
        
    }
    void rec(string &digits, int i, string s){
        if( i == digits.length()){
            ans.push_back(s);
            return;
        }
        string val = nums[digits[i] - '0'];
        for(int j =0; j<val.size(); j++){
            rec(digits,i+1,s+val[j]);
        }
    }
};
