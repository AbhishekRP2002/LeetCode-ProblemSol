class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long int total_sum = 0 , digit_sum = 0;
        int diff = 0;
        for(auto i:nums)
            total_sum+=i;
        
        for(int i=0;i<nums.size();++i)
        {
            string s = to_string(nums[i]);
            for(auto i:s)
            {
                digit_sum += i-'0';
            }
        }
        
        diff = abs(total_sum - digit_sum);
        return diff;
    }
};