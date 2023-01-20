class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       //vector<int>temp(nums);
        // temp.insert(temp.end() , nums.begin() , nums.end());
        // find the subarray with max sum
        int maxSum =INT_MIN , currSum1=0, currSum2=0 , minSum =INT_MAX;
        int totalSum = accumulate(nums.begin() , nums.end() , 0);
        int i =0 , n = nums.size();
        for(i= 0;i<n;++i)
        {
            currSum1+=nums[i];
            currSum2+=nums[i];
          
             maxSum = max(maxSum ,currSum1);
            if(currSum1 < 0)
                currSum1 = 0;
            
            
            
            minSum = min(minSum,currSum2);
            if(currSum2 > 0)
                currSum2 = 0;
        }
        
        if(totalSum==minSum)
            return maxSum;
        return max(maxSum , totalSum-minSum);
    }
};