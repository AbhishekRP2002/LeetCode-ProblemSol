class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        int i=0 , j=n-1 , maxm =0;
        while(i<j){
            maxm = max(maxm , nums[i++] + nums[j--]);
        }
        return maxm;
        
    }
};