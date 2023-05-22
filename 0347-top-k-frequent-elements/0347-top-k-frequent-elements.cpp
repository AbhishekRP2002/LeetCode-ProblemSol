class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        sort(nums.begin() , nums.end());
        map<int , int>m;
        vector<pair<int,int>>ans_pair;
        vector<int>res;
  
        
        for(int i =0;i<n;++i)
        {
            m[nums[i]]++;
        }
        
        for(auto it:m)
        {
            ans_pair.push_back({it.second, it.first});
        }
        
        sort(ans_pair.rbegin() , ans_pair.rend());
        
        
     
            for(auto it:ans_pair)
            {
                res.push_back(it.second);
                if(res.size()>=k) break;
            }

        return res;
        
    }
};