class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        //  int n = nums.size();
        //  sort(nums.begin() , nums.end());
        // int len = 0;
//         int j = n-1;
//         map<int,int>m;
//         for(auto i:nums)
//             m[i]++;
//         for(int i = n-1 ; i >= 0 ; --i)
//         {
//             int ctr =0;
//             vector<int>temp(nums);
//             int x = sqrt(temp[i]);
//             if(x*x == temp[i])
//             {
//                 while(m.count(sqrt(temp[i])))
//                 {
//                     ctr++;
//                     temp[i] = sqrt(temp[i]);
//                 }
//             }
//             len = max(len , ctr==0?0:ctr+1);
//         }
        
//         return len==0?-1:len;
        
//         map<long long int , int>m;
        
//         // for(int i=0;i<n;++i)
//         //     m[nums[i]] = i;
        
//         int ctr = 0;
        
//         for(int i = n-1;i>=0;)
//         {
//             int curr = nums[i];
//             long long int  x = nums[i]*1LL*nums[i];
//             if(m.count(x) and m[x]!=-1)
//             {
//                 ctr++;
//                 // cout<<ctr<<" \n";
//                curr = x;
//             }
//             else
//             {
//                 m[x] = -1;
//                 break;
//             }
//             cout<<ctr<<" "<<len<<"\n";
            
//             if(ctr>1)
//             len = max(len , ctr);
//         }
        
        
//         return len==0?-1:len;
        
          sort(nums.begin(),nums.end());
        int count = 0;
        int X = 1e5+1;
        vector<int>dp(X,1);
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]] = i;
        }
        for(int i=0;i<n;i++)
        {
            int sq = sqrt(nums[i]);
            if((sq*sq)==nums[i] and mp.find(sq)!=mp.end())
            {
                dp[i]+=dp[mp[sq]];
            }
        }
        int ans =  *max_element(dp.begin(),dp.end());
        if(ans==1)return -1;
        return ans;
    }
};