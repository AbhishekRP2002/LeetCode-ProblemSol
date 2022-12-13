class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
      int n = nums.size();
      int ans = INT_MIN;
     long long int sum = 0;
        for(int i= 0;i<nums.size();++i)
        {
             sum+=nums[i];
            int avg = (sum+ i)/(i+1);
            ans = max(ans , avg);
        }
        
        return ans;
    }
};