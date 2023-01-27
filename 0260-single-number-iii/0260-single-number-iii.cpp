class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         sort(nums.begin() , nums.end());
        
        int n = nums.size();
        
        if(n==2)
            return nums;
        
//         int xorVal = 0;
//         for(int i=0;i<n;++i)
//         {
//             xorVal^=nums[i];
//         }
        
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
        // Using Sorting and single iteration for comparison we can also solve this question
        vector<int>ans;
        for(int i=0;i<n-1;)
        {
            if(nums[i]==nums[i+1])
            {
                i+=2;
            }
            else
            {
                ans.push_back(nums[i]);
                if(ans.size()==2)
                    return ans;
                i++;
            }
        }
        
        if(nums[n-1]!=nums[n-2])
            ans.push_back(nums[n-1]);
        return ans;
        // BIT MANIPULATION APPROACH 
        
        
        
    }
};