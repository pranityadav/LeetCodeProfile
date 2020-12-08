class Solution {
public:
    int lengthOfLastWord(string s) {
        int count= 0;
        int a = s.length()-1;
        cout<<a;
        while(s[a] == ' '){
            a--;
        }
        while( a >= 0 && s[a] != ' '){
            a--;
            count++;
        }
        return count;
    }
};
