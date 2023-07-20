class Solution {
public:
    int dp[101];
    int util(vector<int>& nums , int ind)
    {
        if(ind > nums.size() - 1)
            return 0;
        
        if(dp[ind] != -1)
            return dp[ind];
        
        return dp[ind] = max( nums[ind] + util(nums , ind + 2) , util(nums, ind + 1));
    }
    int rob(vector<int>& nums) {
     
        int n = nums.size();
        memset(dp , -1 , sizeof(dp));
        int ans  = util(nums , 0 );
        for(int i=0 ;i <= 100 ;++i )
        {
            ans  = max(ans , dp[i]);
        }
        
        return ans;
    }
};