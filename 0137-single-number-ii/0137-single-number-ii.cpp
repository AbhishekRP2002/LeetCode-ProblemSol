class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //map approach
        int n = nums.size();
        map<int, int>m;
        for(auto i:nums)
        m[i]++;
        int ans = 0;
        for(auto i:m)
            if(i.second == 1)
                ans = i.first;
        
        return ans;
        
        
        
        
        
        
        
        //bit manipulation approach
    }
};