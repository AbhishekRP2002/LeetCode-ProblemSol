class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      // brute force - find all subarrays sum and check if they are divisble by k or not if yes ctr++;
        // efficient / optimised approach : Use Prefix sum , To get the subarray pref[x] - pref[y] use karna 
        int n = nums.size();
       int rem =0;
        unordered_map<int, int>m;
        m.insert({0,1});
        int ctr = 0;
        long long sum =0;
        for(int i =0;i<n;++i)
        {
            sum+=nums[i];
            int rem = sum%k;
            if(rem<0)
                rem+=k;
            if(m.find(rem)!=m.end())
            {
                ctr+=m[rem];
                m[rem]++;
            }
            else
                m[rem]=1;
                
        }
        // if a is divisible by k and b is divisible by k then there aresult obtained by arithmetic operation + - * will also be divible by k
        
        return ctr;
        
       
        
    }
};