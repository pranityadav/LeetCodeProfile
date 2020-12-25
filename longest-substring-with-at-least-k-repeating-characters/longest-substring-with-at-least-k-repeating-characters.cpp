class Solution {
public:
       int helper(string &s, int k,int start,int end)
    {
        int hashmap[256]={0};
        for(int i=start;i<end;i++)
        {
            hashmap[s[i]]++;
        }
        for(int i=start;i<end;i++)
        {
            if(hashmap[s[i]]<k)
                return max(helper(s,k,start,i),helper(s,k,i+1,end));
        }
        return end-start;
    }
    int longestSubstring(string s, int k) {
        return helper(s,k,0,s.length());
    }
};
