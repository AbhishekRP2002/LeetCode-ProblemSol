class Solution {
public:
    int longestSubarray(vector<int>& nums) {
//         int n = nums.size();
//         vector<pair<int, int>>pref_and;
//         for(auto i:nums)
//             pref_and.push_back({i,0}); // 0 main bitwise AND value rahega
        
//         pref_and[0].first = nums[0];
//         pref_and[0].second = nums[0];
//         for(int i=1;i<n;++i)
//         {
//             if((pref_and[i-1].first & nums[i]) >= pref_and[i-1].first)
//                 pref_and[i].first = pref_and[i-1].first & nums[i];
//             else
//             {
//                 pref_and[i].second = nums[i];
//                 pref_and[i].first = nums[i];
//             }
                
//         }
        
//         int maxm = *max_element(nums.begin() , nums.end());
        
//         for(int i=0;i<pref_and.size();++i)
//         {
//             if(pref_and[i].first >= maxm)
//                 maxm = pref_and[i].first;
//         }
        
//         int ans = 0;
//         for(auto i:nums)
//             if(i==maxm)
//                 ans++;
//         for(auto i:pref_and)
//             if(i.first == maxm and i.second!=i.first)
//                 ans++;
        
//         return ans;
        
        // find the max element in the array and the longest sub array with all elements as max element
        int n = nums.size();
        int maxm = *max_element(nums.begin() , nums.end());
        int ans = 1 , subarrayLen = 0;
        
        for(int i=0;i<n;++i)
        {
            if(nums[i]==maxm)
            {
                subarrayLen++;
                ans = max(ans , subarrayLen);
            }
            else
                subarrayLen = 0;
        }
        
        return ans;
    }
};