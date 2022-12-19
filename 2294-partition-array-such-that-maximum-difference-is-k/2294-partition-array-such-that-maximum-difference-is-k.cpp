class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int j =0 , ans = 1;
        for(int i= 0;i<n;++i)
        {
            if(nums[i] - nums[j] >k)
            {
            ans++;
            j = i;
            }
        }
        
        return ans;
    }
};