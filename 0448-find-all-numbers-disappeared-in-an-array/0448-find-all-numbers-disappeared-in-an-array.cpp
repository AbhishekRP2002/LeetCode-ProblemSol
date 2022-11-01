class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int>ans;
        vector<int>hashmap(n+1,0);
        
        for(int i =0;i<n;++i)
        {
            hashmap[nums[i]]++;
        }
        
        for(int i=1;i<=n;++i)
        {
            if(hashmap[i]==0)
                ans.push_back(i);
        }
        
        return ans;
    }
};