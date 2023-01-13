class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        vector<int>ans(2);
        unordered_set<int>st(a.begin() , a.end());
        int diff = (accumulate(a.begin() ,a.end() , 0) - accumulate(b.begin() , b.end() , 0))/2;
        
        for(auto i:b)
           if(st.count(i+diff))
           {
               ans[1] = i;
               ans[0] = i+diff;
               break;
           }
        
      
        return ans ;
    }
};