class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
       int ctr = 0;
        int size = nums.size();
        for(int i=0;i<size;++i)
        {
            if(nums[i]==0)
            {
                int prev = (i==0 or nums[i-1]==0)?0:1;
                int next = (i==size-1 or nums[i+1]==0)?0:1;
            
            if(prev ==0 and next==0)
            {
                nums[i] = 1;
                ctr++;
            }
            }
            
        }
        
        return ctr>=n;
    }
};