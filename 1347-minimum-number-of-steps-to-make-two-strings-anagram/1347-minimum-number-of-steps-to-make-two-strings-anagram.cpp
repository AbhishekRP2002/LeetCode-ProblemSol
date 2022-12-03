class Solution {
public:
    int minSteps(string s, string t) {
     int ans = 0;
        map<int , int>m1;
        map<int , int>m2;
        for(auto i:s)
            m1[i-'a']++;
        for(auto i:t)
            m2[i-'a']++;
        
        set<int >st;
        for(auto i:t)
            st.insert(i-'a');
        
        int  n = s.size();
      for(auto i:st)
      {
          if(m2[i] > m1[i])
              ans+=abs(m1[i] - m2[i]);
      }
        
        
        return ans;
    }
};