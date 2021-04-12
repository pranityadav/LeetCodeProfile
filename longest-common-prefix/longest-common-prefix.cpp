class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";    
        string temp = strs[0];

        for(int i = 1; i<strs.size() ; i++){
            string common = "";
            for(int j = 0; j< min(temp.size(), strs[i].size()); j++){
                if(temp[j] == strs[i][j]){
                   common.push_back(strs[i][j]);
                }
                else break;
            }
            temp = common;
        }
        return temp;
    }
};
  
