class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ind;
        int n = s.length();
        for(int i=0;i<n;++i)
        {
            if(s[i]==c)
                ind.push_back(i);
        }
        
        // sort(ind.begin() , ind.end());
        vector<int>ans;
        
        for(int i=0;i<n;++i)
        {
            int dif = INT_MAX;
            for(int j=0;j<ind.size();++j)
            {
                dif = min(dif , abs(i-ind[j]));
            }
            ans.push_back(dif);
        }
        
        return ans;
    }
};