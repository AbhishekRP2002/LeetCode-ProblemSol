class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
//         Variable length sliding window 
//     BF- Find all subarrays and no of odd nums in them , check with k 
        int i =0, j= 0,cnt=0, ans = 0, temp =0;
        while(j<n)
        {
            if(nums[j]&1)
                cnt++, temp =0;
            // if(cnt < k)
            // {
            //     j++;
            // }
            // else
            // {
                while(cnt==k)
                {
                                       
                    temp++;
                    cnt-= nums[i]&1;
                    i++;
                } 
                
                 ans+=temp;
               
                
                    j++;
                // }
            }
            
        
        
        
        return ans;

        // int ans = 0,odd = 0,cnt = 0;
        // int l = 0,r = 0;
        // while(r<n)
        // {
        //     if(nums[r]%2 != 0)
        //     {
        //         odd++;
        //         cnt = 0;
        //     }
        //     while(odd == k)
        //     {
        //         ++cnt;
        //         odd -= nums[l++]&1; 
        //     }
        //     ans += cnt;
        //     r++;
        // }
        // return ans;
    }
};