class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> s;
        for(int t:target){
            s.push(t);
        }
         n = s.top() ;
        int temp;
        while(!s.empty()){
            temp = s.top();
            s.pop();
            if(temp != n){
                ans.push_back("Pop");
                s.push(temp);
            }
            ans.push_back ("Push");
            n--;
        }
        while(n!=0){
            ans.push_back("Pop");
            ans.push_back("Push"); 
            n--;
        }
         reverse(ans.begin(), ans.end());
        return ans;
    }
};
