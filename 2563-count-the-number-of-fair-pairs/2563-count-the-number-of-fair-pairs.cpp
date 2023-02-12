class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans = 0;
        map<int, int>m;
        for(auto i:nums)
            m[i] =i;
        int n = nums.size();
        sort(nums.begin() ,nums.end());
       for(int i=0;i<n;++i)
       {
           int low = lower_bound(nums.begin()+i+1 , nums.end() , lower - nums[i]) - nums.begin();
           int high = upper_bound(nums.begin() + i+1 , nums.end() , upper - nums[i]) - nums.begin();
           ans += 1LL*(high -low);
       }
        
        return ans;
        

    }
};