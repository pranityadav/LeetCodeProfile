class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char,char> p = { {')','('},
                                       {'}','{'},
                                       {']','['}};
        for (int i=0 ; i< s.size(); i++){
            if(stack.empty()){
                if(p.find(s[i]) != p.end()){
                    return false;
                }
                stack.push(s[i]);
            }
            else if (p.find(s[i]) == p.end() ){
                stack.push(s[i]);
            }
            else if (stack.top() == p[s[i]]){
                stack.pop();
            }
            else return false;
        }
        return stack.empty();
    }
};
