class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //map approach
//         int n = nums.size();
//         map<int, int>m;
//         for(auto i:nums)
//         m[i]++;
//         int ans = 0;
//         for(auto i:m)
//             if(i.second == 1)
//                 ans = i.first;
        
//         return ans;
        
        
        //bit manipulation approach
        int n = nums.size();
        vector<int>bitsCnt(32,0);
        int temp = 0;
        
        for(int i=0;i<n;++i)
        {
             temp = nums[i];
            
            for(int j=31;j>=0;--j)
            {
                bitsCnt[j]+=(temp&1);
                temp>>=1;
                if (!temp)
    				break;
            }
        }
        
        int res = 0;
        
        for(int i=31;i>=0;i--)
        {
           temp = bitsCnt[i]%3;
            if(temp)
            res += 1<<(31-i);
        }
        
        return res;
        
    }
};