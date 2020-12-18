class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans ="";
        int count = 0;
       for(char s:S){
           if(s =='('){
               if(count != 0)
                   ans+=s;
               count++;
               
           }
           else{
               count --;
               if(count != 0){
                   ans +=s;
               }
           }
       }
        return ans;
    }
};
