class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
//       int n = nums.size();
//         for(auto& x: nums)
//         {
//             if( x == k)
//                 x = 0 ;
//             else if (x > k)
//                 x  = 1;
//             else
//                 x = -1;
//         }
        
        
//         vector<int>pref_sum(n , 0);
//         pref_sum[0] = nums[0];
//         int cnt = 0 ;
//         map<unsigned int , int>m;
//         m[pref_sum[0]]++;
//       if(pref_sum[0] == 0)
//           cnt++;
        
//         for(int i= 1;i<n;++i)
//         {
//             pref_sum[i] = pref_sum[i-1] + nums[i];
//             if(m.count( pref_sum[i] - 0))
//                 cnt+=m[pref_sum[i] - 0];
//             if( m.count(pref_sum[i] - 1))
//             {
//                 if(nums[i]==1)
//                 { int temp = m[pref_sum[i] - 1]>>1;
//                     cnt+= temp;
//                 }
//                 else
//                     cnt+= m[pref_sum[i] - 1];
                
//             }
            
//             m[pref_sum[i]]++;
                
//         }
        
//         return cnt;
          int n = (int) nums.size();
        
        unordered_map<int, int> cnt; // prefix
        cnt[0] = 1; // can be think as the prefix on index -1
        
        bool includeK = false;
        int balance = 0; 
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < k)
                balance--;
            else if (nums[i] > k)
                balance++;
            else // num[i] == k
                includeK = true;
            
            if (includeK) {
                // find x in prefix hashmap 
                // greater - smaller == 0 or 1
                // => prefix[i] - prefix[x] == 0 or 1
                // => curBalance - prefix[x] == 0 or curBalance - prefix[x] == 1
                // => prefix[x] == curBalance or prefix[x] == curBalance - 1
                ans += cnt[balance] + cnt[balance - 1]; 
            }
            else
                cnt[balance]++;
        }
        return ans;         
    }
};