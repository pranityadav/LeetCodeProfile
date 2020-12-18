class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> u;
        string ans;
        for(char s:S){
            if(u.empty()){
                u.push(s);
            }
            else if ( u.top() == s)
                u.pop();
            else 
                u.push(s);
        }
        while(!u.empty()){
            ans += u.top();
            u.pop();
        }
        reverse (ans.begin(), ans.end());
        return ans;
    }
};
