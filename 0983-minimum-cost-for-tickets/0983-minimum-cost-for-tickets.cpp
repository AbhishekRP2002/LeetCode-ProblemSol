class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int ans= 0;
        int n = days.size();
        int m = costs.size();
        unordered_set<int>st(begin(days) , end(days));
        
        int dp[366] = {0} ;
        
        for(int i=1 ;i<=365;++i)
        {
            if(st.find(i) == st.end())
                dp[i] =dp[i-1];
            else
            {
                dp[i] = min(dp[i-1]+costs[0] , min(dp[max(0,i-7)] + costs[1], dp[max(0,i-30)] + costs[2]));
            }
        }
        
        return dp[365];
    
    }
};