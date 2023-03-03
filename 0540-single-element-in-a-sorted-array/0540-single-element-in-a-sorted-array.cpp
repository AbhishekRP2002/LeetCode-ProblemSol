class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
//         int ans = 0;
//         for(int i=0;i<nums.size();++i)
//         {
//             ans ^= nums[i];
//         }
        
//         return ans;
//above method was Bit manipulation
    
    //Binary Search Approach
    int n = nums.size();
        
     int low = 0, high = n-1;
     
        while(high >  low)
        {
            int mid = low + (high - low)/2;
            if(mid&1)
            {
                if(nums[mid]==nums[mid-1])
                    low = mid+1;
                else
                    high = mid;
            }
            else
            {
                 if(nums[mid]==nums[mid+1])
                    low = mid+1;
                else
                    high = mid;
            }
        }
        
        return nums[high];
        
        
    }
};