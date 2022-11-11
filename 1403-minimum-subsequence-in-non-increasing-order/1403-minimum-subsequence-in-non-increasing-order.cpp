class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       int n= nums.size();
        vector<int>ans;
        sort(nums.begin() , nums.end());
        int totalSum = 0;
        for(auto i:nums)
            totalSum+=i;
        int sum = 0;
        
        for(int i=n-1;i>=0;--i)
        {
            
            
            sum+=nums[i];
             ans.push_back(nums[i]);
            if(sum > totalSum - sum)
            {
               
                break;
            }
        
               
        }
        
        return ans;
    }
};