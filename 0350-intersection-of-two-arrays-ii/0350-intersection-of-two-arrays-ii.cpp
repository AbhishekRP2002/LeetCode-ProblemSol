class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        unordered_map<int, int>m;
        
        for(auto it : nums1)
        {
            m[it]++;
        }
        
        for(int i=0;i<nums2.size();++i)
        {
            m[nums2[i]] = m[nums2[i]]-1;
            if(m[nums2[i]] >=0)
                res.push_back(nums2[i]);
        }
        return res;
    }
};