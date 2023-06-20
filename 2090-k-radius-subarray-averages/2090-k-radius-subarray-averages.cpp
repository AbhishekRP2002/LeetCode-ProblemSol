class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int>ans(n,-1);
        if(n < (2*k + 1))
            return ans;
        //precompute
        long long avgSum = 0;
        int i = 0;
        while(i < (2*k + 1))
        {
            avgSum+=nums[i];
            i++;
        }
        
        
        int midPtr = k;
        ans[midPtr] = avgSum/(2*k+1);
        midPtr++;
        int start = 2*k + 1;
        int end = 0;
        while(start < n)
        {
            avgSum+= (nums[start] - nums[end]);
            ans[midPtr++] = avgSum/(2*k+1);
            start++;
            end++;
        }
        
        return ans;
    }
};