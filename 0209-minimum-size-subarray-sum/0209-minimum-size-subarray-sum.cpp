class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i= 0 , j= 0, ans = INT_MAX ,sum = 0, n = nums.size();
        //variable window size problem 
        while(j<n)
        {
            sum+=nums[j];
            if(sum<target)
                j++;
            else if(sum >= target)
            {
                // ans = min(ans , j-i+1);
                // sum -= nums[i];
                // i++;
                while(sum >=target)
                {
                    ans = min(ans , j-i+1);
                    sum-= nums[i];
                    i++;
                }
                j++;
            }
        }
        if(ans == INT_MAX) return 0;
        else
        return ans ;
    }
};