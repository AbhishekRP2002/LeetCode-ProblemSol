class Solution {
public:
    int largestCombination(vector<int>& nums) {
        int n = nums.size();
//         sort(nums.begin() , nums.end());
//         int ctr = 0 , temp = 1;
//         for(int i=0;i<n;++i)
//         {
//             if((temp&nums[i])>=temp)
//             {
//                 ctr++;
//                 temp &= nums[i]; 
//                 cout<<nums[i]<<" ";
//             }
//         }
         
//         return ctr;
        //1. Brute force : Find all combinations and there corresponding AND value , keeping the count value of , the find the length of the subset with largest AND value
        //2.Use bit manipulation
       int ans = 0; 
        vector<int>bit_arr(31,0);
        for(auto x:nums)
        {
            for(int i=0;i<31;++i)
            {
                if(x & (1<<i))
                    bit_arr[i]++;
            }
        }
        
        ans = *max_element(bit_arr.begin(), bit_arr.end());
        return ans;
    }
};