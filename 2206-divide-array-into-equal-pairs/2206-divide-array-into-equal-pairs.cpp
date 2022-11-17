class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m;
        int n = nums.size();
        for(auto i:nums)
            m[i]++;
        for(auto i:m)
        {
            if(m[i.first]%2!=0)
                return false;
        }
        
        return true;
    }
};