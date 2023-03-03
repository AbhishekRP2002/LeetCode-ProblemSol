class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //   for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]>nums[i+1])
        //     {
        //         return i;
        //     }
        // }
        // return nums.size()-1;
        // return max_element(nums.begin() , nums.end()) - nums.begin();
//         binary search approach
        int n = nums.size();
        if(n==1)
            return 0;
        if(n==2)
            return nums[0]>nums[1] ? 0:1;
        int low = 0 ,high =  n-1;
        while(high - low > 1)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[mid-1] and nums[mid] > nums[mid+1])
                return mid;
            if(nums[mid] < nums[mid+1])
                low = mid+1;
            else
                high = mid;
        }
    
        if(nums[high] > nums[low])
            return high;
        return low;
        
    }
};