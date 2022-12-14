class Solution {
public:
    int rob(vector<int>& nums) {
       // int ans1 = 0 , ans2 =0;
       //  int n = nums.size();
       //  for(int i=0;i<n;i+=2)
       //      ans1+=nums[i];
       //  for(int i=1;i<n;i+=2)
       //      ans2+=nums[i];
       //  return max(ans1,ans2);
        
        int n = nums.size();
        vector<int>dp(n,-1);
        if(n==1)
            return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;++i)
        {
            dp[i] = max( nums[i] + dp[i-2] , dp[i-1]);
            
        }
        if(n==2)
            return max(nums[0] , nums[1]);
        return dp[n-1];
    }
};