class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int i=0,j=0, ans = -1 ;
        multiset<int>st;
        while(j<n)
        {
            st.insert(nums[j]);
            while(*st.rbegin() - *st.begin() > limit)
                st.erase(st.find(nums[i++]));
            ans = max(ans , j-i+1);
            j++;
        }
        
        return ans;
    }
};