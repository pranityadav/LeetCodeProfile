class Solution {
​
   public:
    void dfs(vector<vector<int>> &graph,int source,vector<int> &path,
             vector<vector<int>> &paths)
    {
        int n=graph.size();
        path.push_back(source);
        if(source==n-1)
        {
            paths.push_back(path);
            return;
        }  
        for(int i=0;i<graph[source].size();i++)
        {
                dfs(graph,graph[source][i],path,paths);
            path.pop_back();
            }
        
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> current;
        vector<vector<int>> paths;
        int source=0;
        dfs(graph,0,current,paths);
        return paths;
    }
};
