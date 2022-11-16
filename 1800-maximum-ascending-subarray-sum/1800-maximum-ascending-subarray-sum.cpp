class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int n = nums.size();
        int sum = 0;
        vector<int>pref(n);
        pref[0] = nums[0];
        for(int i=1;i<n;++i)
        {
            if(nums[i]>nums[i-1])
                pref[i] = pref[i-1] + nums[i];
            else
                pref[i] = nums[i];
            
            
        }
        
        int maxm = *max_element(pref.begin() , pref.end());
        return maxm;
        
        
        
    }
};