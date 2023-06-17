class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        //adj list bana kar check for every pair , if connected then -1 else nhi
        int ans = 0;
        vector<unordered_set<int>>g(n);
        for(auto i:roads)
        {
            g[i[0]].insert(i[1]);
            g[i[1]].insert(i[0]);
        }
        
        for(int i=0;i<n;++i)
        {
            for(int j=i+1;j<n;++j)
            {
                int temp = g[i].size() + g[j].size();
                
                if(g[j].count(i))
                    temp--;
                
                ans = max(ans , temp);
                
            }
            
            
        }
        
        return ans;
    }
};