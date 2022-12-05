class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      int ans  = 0;
        int n = jewels.size();
        map<char , int>m;
        for(auto i:stones)
        {
            m[i]++;
            
        }
        
        
        set<char>s;
        for(auto i:jewels)
        {
            s.insert(i);
        }
        
        for(auto i:s)
        {
            if(m.count(i))
            {
                ans+=m[i];
            }
        }
        
        
        return ans;
    }
};