class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       unordered_set<int> seen;
        queue<int> q;
      
        int N = rooms.size();
        q.push(0);
        seen.insert(0);
    
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i:rooms[node]){
                if(seen.count(i) == 0){
                    q.push(i);
                    seen.insert(i);
                  
                }
              
                
            }
        }
        return seen.size() == N;
    }
    
};
