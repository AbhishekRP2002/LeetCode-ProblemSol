class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
            return n;
    //     int ctr = 0 , ans = 0;
    //     sort(nums.begin()  ,nums.end());
    //     int prev = nums[0];
    //     for(int i=1;i<n;++i)
    //     {
    //         if(nums[i]==prev+1)
    //         {
    //             ctr++;
    //             ans = max(ans , ctr);
    //             prev += 1;
    //         }
    //         else
    //         {
    //             prev = nums[i];
    //             ctr =0 ;
    //         } 
    //     }
    // return ans+1;
        
       
        sort(nums.begin() , nums.end());
        
        if(nums[0]==nums[n-1])
            return 1;
        int len  = 0 , ans  = 0 ;
        bool flag = false;
        for(int i=1 ; i<n ;++i)
        {
            flag = true;
            int diff = nums[i] - nums[i-1];
            if( diff == 1 )
            {
                len++;
                ans = max(len +1, ans);
            }
            else if( diff > 1 )
            {
                len = 0;
                
                
                
            }
        }
        

       if(flag == true and ans == 0)
           return 1;
        return ans;
        
    }
};