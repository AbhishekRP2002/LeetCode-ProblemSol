class Solution {
public:
    vector<int>adj[500001];
    bool vis[500001];
    bool can;
    void dfs(int u , int par , int destination)
    {
        if(u==destination)
            can = true;
        vis[u]=true;
        for(auto i:adj[u])
        {
            if(!vis[i])
            dfs(i  , u , destination);
        }
    }
        
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i=0;i<edges.size();++i)
        {
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        dfs(source , -1 , destination);
        return can;
    }
};