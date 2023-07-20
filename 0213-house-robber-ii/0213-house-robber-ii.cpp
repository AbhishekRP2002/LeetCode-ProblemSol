class Solution {
public:
    int dp[101][2];
    
    int util(vector<int>& nums , int flag , int curr)
    {
        int n = nums.size();
        if(flag == 0)
        {
            if(curr > n-2)
                return 0;
        
        }
        else
        {
            if(curr > n-1)
                return 0;
        }
        
        
        if(dp[curr][flag] != -1)
            return dp[curr][flag];
        
        return dp[curr][flag] =  max(nums[curr] + util(nums , flag , curr + 2) , util(nums , flag , curr+1));
        
        
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1)
            return nums[0];
        int flag = 0; // => start ind  = 0
        
        memset(dp , -1, sizeof(dp));
        return max(util(nums , flag , 0) , util(nums , flag + 1 , 1) );
    }
};