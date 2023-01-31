class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
       int n = scores.size() , sum = 0 , diff = 0;
        
        if(n==1)
            return scores[0];
        vector<pair<int, int>>v;
        for(int i=0;i<n;++i)
        {
            v.push_back({ ages[i] , scores[i]});
            
        }
        
        sort(v.begin(),v.end());
        vector<int>dp(n);
        for(int i=0;i<n;++i)
        {
            int temp = v[i].second;
            dp[i] = temp;
            for(int j=0;j<i;++j)
            {
                if(v[j].second <= v[i].second)
                {
                    dp[i]= max(dp[i] , dp[j]+temp);
                }
                
                sum = max(sum,dp[i]);
            }
        }
        
        
        return sum;
        
    }
};