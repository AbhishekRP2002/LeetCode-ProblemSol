class Solution {
public:
    int unequalTriplets(vector<int>& nums) 
    {
    
        
    int n = nums.size();
    
     map<int , int >m;
        for(auto i:nums)
            m[i]++;
        
        int ans = 0 , left = 0 , right = n;
         for(auto [n , ctr] : m)
         {
             right -= ctr;
             ans += left*ctr*right;
             left += ctr;
         }
        
        return ans;
        
        
        
        
    
        
        
        
        
        
        
        
        
    }
};