class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        unordered_map<int,int>m3;
        set<int>st;
        for(auto i:nums1)
            m1[i]++;
        for(auto i:nums2)
            m2[i]++;
        for(auto i:nums3)
            m3[i]++;
        
        for(auto i:nums1)
        {
            if((m1.count(i) and m2.count(i) ) or ( m3.count(i) and m1.count(i)) or (m2.count(i) and m3.count(i)) )
                st.insert(i);
        }
        
           for(auto i:nums2)
        {
            if((m1.count(i) and m2.count(i) ) or ( m3.count(i) and m1.count(i)) or (m2.count(i) and m3.count(i)) )
                st.insert(i);
        }
        
        
        for(auto i:st)
            ans.push_back(i);
        
        return ans;
        
    }
};