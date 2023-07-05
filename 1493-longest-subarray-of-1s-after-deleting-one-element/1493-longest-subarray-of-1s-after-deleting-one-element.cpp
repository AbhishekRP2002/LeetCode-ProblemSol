class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //find the max sub array with 1 '0'
        
//         int n = nums.size();
//         int i=0,j=0,len=0;
//         int ctr=0;
//         while(j<n)
//         {
//             if(nums[j]==0)
//                 ctr++;
            
//             if(ctr>1)
//             {
//                 while(ctr>1)
//                 {
//                     if(nums[i]==0)
//                         ctr--;
//                     i++;
//                 }
//                 j++;
                
//             }
//             else if(ctr<=1)
//             {
//                 len = max(len , j-i+1);
//                 j++;
//             }
//         }
        
//         return (ctr==0)?n-1:len-1;
        
         int zero = 0, one = 0, mx = INT_MIN, i = 0, j = 0, n = nums.size();
        
        while(j < n)
        {
            if(nums[j] == 0) zero++;
            else one++;
            if(zero == 1)
            {
                mx = max(mx, j - i + 1 - zero);      // Can also use max(mx, j - i)
            }
            
            while(zero == 2)
            {
                if(nums[i] == 0) zero--;
                i++;
            }
            
            j++;
        }
        
        
        return mx == INT_MIN ? one - 1 : mx;
    }
};