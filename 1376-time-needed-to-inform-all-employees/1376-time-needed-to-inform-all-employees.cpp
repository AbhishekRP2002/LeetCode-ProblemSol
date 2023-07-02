class Solution {
public:
    int reqMins = INT_MIN;
    void dfs( vector<int>adjList[] ,vector<int>& informTime, int currNode , int currTime )
    {
        reqMins = max(reqMins , currTime);
        for(auto ngh : adjList[currNode])
        {
            dfs(adjList, informTime, ngh, currTime + informTime[currNode]);
        }
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
   
        vector<int>adjList[n];
        for(int i=0;i<manager.size();++i)
        {
            if(manager[i] != -1)
                adjList[manager[i]].push_back(i);
            
        }
        
        
        dfs(adjList , informTime , headID,0);
        
        return reqMins;
    }
};