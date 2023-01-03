class Solution {
public:
    int hIndex(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        
        int low = 0  , high = n-1;
        
        while( high-low > 1 )
        { 
            int mid = low + (high - low)/2;
            if(nums[mid] >= n-mid)
                 high = mid;
            else
                low = mid+1;
            
        }
        
        int ans = 0;
        if(nums[high] >= n-high)
          ans = n- high;
       if(nums[low] >= n-low)
           ans = n-low;
        
        return ans;
    }
};