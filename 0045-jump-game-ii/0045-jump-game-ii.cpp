class Solution {
public:
    int jump(vector<int>& nums) {
        int  l = 0 , r = 0 ,n = nums.size();
        int ans = 0;
        if(nums.size()==1 )
            return 0;
        if(nums.size()==2 and nums[0]>0)
            return 1;
        //count the windows to get the ans
        while(r<nums.size())
        {
            ans+=1;
            int max_jump = INT_MIN;
            for(int i = l ;i<=r;++i)
            {
                if(i + nums[i] >= n-1)
                    return ans;
                max_jump = max(max_jump , i+nums[i]);
            }
            l  = r ;
            r = max_jump;
            
        }
        
        return ans;
    }
};


