​
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    const int n = s.size();
          int i =0;
    while(i < n){
        if(indices[i]!=i){
            swap(s[i],s[indices[i]]);
            swap(indices[i],indices[indices[i]]);
        }
        else i++;
        
    }
    return s;
}
};
/*
0 1 2 3 4 5 6 7 index
​
0 5 6 7 4 2 1 3 indices array
l o d e c e e t  string
*/
​
   
​
