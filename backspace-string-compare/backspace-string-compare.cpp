class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> temp;
        for(char s:S){
            if(s != '#'){
                temp.push(s);
            }
            else if(!temp.empty()){
                temp.pop();
            }
        }
        stack<char> temp2;
        for(char t:T){
            if(t != '#'){
                temp2.push(t);
            }
            else if(!temp2.empty()){
                temp2.pop();
            }
        }
        return (temp == temp2);
        
    }
        
    
};
