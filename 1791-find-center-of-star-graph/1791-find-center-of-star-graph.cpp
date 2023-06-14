class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int ans = 0;
        // set<int>st;
        // for(auto i:edges)
        // {
        //     st.insert(i.first);
        //     st.insert(i.second);
        // } 
        
        map<int, int>mp;
        for(int i=0;i<n;++i)
        {
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        
        int i=1;
        while(i<=n+1)
        {
            if(mp[i]==n)
                ans = i;
            i++;
        }
        
        return ans;
        
    }
};