class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
         unordered_map<int,int>m;
        int n = nums.size();
        for(int i=0;i<n-1;++i)
        {
            if(nums[i]==key)
                m[nums[i+1]]++;
        }
        
        int ans =0 , freq =0;
        for(auto it:m)
        {
            if(it.second > freq)
            {
                freq = it.second;
            }
        }
        
        for(auto i:m)
        {
            if(i.second == freq)
                ans = i.first;
        }
        
        return ans;
    }
};