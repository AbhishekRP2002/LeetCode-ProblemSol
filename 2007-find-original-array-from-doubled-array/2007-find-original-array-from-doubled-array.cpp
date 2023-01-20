class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
//         sort(nums.begin() , nums.end());
//         vector<int>ans;
//         map<int , int>m;
//         int n = nums.size();
//         if(n%2!=0)
//             return ans;
//         for(auto i:nums)
//         {
//             m[i]++;
//         }
        
        
//         for(int i=0;i<nums.size();++i)
//         {

//         if(nums[i]>0)
//         {
//             if(m.find(2*nums[i])!= m.end())
//             {
//                 m[nums[i]]--;
//                 m[2*nums[i]]--;
//                 ans.push_back(nums[i]);
//                 int ind = find(nums.begin() , nums.end() , 2*nums[i]) - nums.begin();
//                 nums[i] = -1;
//                 nums[ind] = -1;
                
                
//             }
            
//         }
//             else if(nums[i] == 0)
//             {
//                 if(m[0]>=2)
//                 {
//                 ans.push_back(nums[i]);
//                 m[nums[i]]-=2;
             
//                 int ind = find(nums.begin() , nums.end() , 2*nums[i]) - nums.begin();
//                 nums[i] = -1;
//                 nums[ind] = -1;
//                 }
//             }
//         }
        
        
//         cout<<m.size()<<" "<<"\n";
//        int cnt = 0; 
//        for(auto it:m)
//        {
//            if(it.second == 0)
//                cnt++;
//        }
//         if(cnt == m.size())
//             return ans;
//         else
//         {
//             ans.clear();
//             return ans;
    int n = changed.size();
        if (n % 2 == 1) return {};
        sort(changed.begin(), changed.end());
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[changed[i]]++;
        }
        for (int i = 0; i < n; i++) {
          if (mp[changed[i]] == 0) continue;
          if (mp[changed[i] * 2] == 0) return {};
          ans.push_back(changed[i]);
          mp[changed[i]]--;
          mp[changed[i] * 2]--;
        }
        return ans;    
    }
    
};