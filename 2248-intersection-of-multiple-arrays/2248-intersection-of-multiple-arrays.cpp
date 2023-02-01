class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        map<int, int>mp;
        for(auto& i:nums)
        {
            for(auto& j:i)
                mp[j]++;
            
        }
        vector<int>ans;
        
        
        for(int i=0;i<m;++i)
        {
            if(mp[nums[0][i]]==n)
                ans.push_back(nums[0][i]);
        }
        
        sort(ans.begin() , ans.end());
        return ans;
    }
};