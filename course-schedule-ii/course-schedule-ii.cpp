class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses,vector<int> (0));
        vector<int> Indegree(numCourses, 0);
        queue<int> ZeroDegree;
        vector<int> ans;
        for(int i = 0; i<prerequisites.size(); i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            Indegree[prerequisites[i][0]]++;
        }
        for(int i = 0; i<Indegree.size(); i++){
            if(Indegree[i] == 0){
                ZeroDegree.push(i);
                ans.push_back(i);
                numCourses--;
            }   
        }
        
        
        while(!ZeroDegree.empty()){
            int node  = ZeroDegree.front();
            ZeroDegree.pop();
            for(int i = 0; i<graph[node].size(); i++){
                Indegree[graph[node][i]]--;
                if(Indegree[graph[node][i]] == 0){
                     ZeroDegree.push(graph[node][i]);
                      ans.push_back(graph[node][i]);
                      numCourses--;  
                }
            }
        }

        vector<int> temp;
        return (numCourses==0) ? ans : temp;
    }
};