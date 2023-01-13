class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int>m;
        for(auto i:s)
            m[i]++;
        
        set<char>st;
        for(auto i:s)
            st.insert(i);
        string ans;
        for(int i=0;i<order.size();++i)
        {
            if(m.count(order[i]))
            {
                while(m[order[i]] > 0)
                {
                    ans.push_back(order[i]);
                    m[order[i]]--;
                }
            }
        }
        
        sort(s.begin() , s.end());
        
       for(auto i:st)
       {
            if(m.count(i))
            {
                while(m[i] > 0)
                {
                    ans.push_back(i);
                    m[i]--;
                }
            }
       }
        
        return ans;
        
    }
};