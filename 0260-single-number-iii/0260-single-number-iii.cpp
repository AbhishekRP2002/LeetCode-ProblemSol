class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        
        int n = nums.size();
        
        if(n==2)
            return nums;

        
//         vector<int>ans(2);
//         for(int i=0;i<n;++i)
//         {
//             for(int j=i+1;j<n;++j)
//             {
//                 if(nums[j]^nums[i] == xorVal)
//                 {
//                     ans[0]=nums[i];
//                     ans[1]=nums[j];
//                     break;
//                 }
//             }
//         }
        
//         return ans;
        
        
        // Using HASH MAP we can solve this question
        
        
        
        //Using SET we can solve as well
//         set<int>st;
//         vector<int>ans;
//         st.insert(nums[0]);
//         for(int i=1;i<n;i++)
//         {
//             if(st.count(nums[i]))
//             {
//                 st.erase(nums[i]);
//                 continue;
//             }
                    
//             st.insert(nums[i]);
            
            
//         }
        
//         for(auto i:st)
//             ans.push_back(i);
        
//         return ans;
        
        
        
        
        
        // Using Sorting and single iteration for comparison we can also solve this question
//         sort(nums.begin() , nums.end());
//         vector<int>ans;
//         for(int i=0;i<n-1;)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                 i+=2;
//             }
//             else
//             {
//                 ans.push_back(nums[i]);
//                 if(ans.size()==2)
//                     return ans;
//                 i++;
//             }
//         }
        
//         if(nums[n-1]!=nums[n-2])
//             ans.push_back(nums[n-1]);
//         return ans;
        
        
        
        
        
//         BIT MANIPULATION APPROACH 
        
                
        int xorVal = 0 , xor2 = 0 , temp;
        for(int i=0;i<n;++i)
        {
            xorVal^=nums[i];
        }
        
        for(int bit = 0;bit<32;++bit)
            if(xorVal & (1<<bit))
            {
                temp = bit;
                break;
            }
        
        for(auto i:nums)
        {
            if( i & (1<<temp))
            xor2 ^= i;
            
        }
        
        return {xorVal^xor2, xor2};
        
        
        
        
    }
};