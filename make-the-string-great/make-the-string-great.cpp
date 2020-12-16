class Solution {
public:
    string makeGood(string s) {
        stack<char> stack;
        
        for(char c:s){
           if(stack.empty()){
               stack.push(c);
           }
            else if(abs(stack.top() - c) != 32){
                stack.push(c);
                
            }
            else stack.pop();
        }
        string ans= "";
        while(!stack.empty()){
           ans+= stack.top();
            stack.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
