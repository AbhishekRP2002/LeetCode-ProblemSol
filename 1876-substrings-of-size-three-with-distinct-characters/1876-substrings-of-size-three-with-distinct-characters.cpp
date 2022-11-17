class Solution {
public:
    int countGoodSubstrings(string s) {
        int ctr =0;
        int i = 0 , j = 0;
        
        while(j<s.length())
        {
           
            if(j-i+1 < 3)
                j++;
            else if(j-i+1 == 3)
            {
               unordered_map<char,int>m;
                m[s[i]]++;
                m[s[i+1]]++;
                m[s[i+2]]++;
                if(m.size()==3)
                    ctr++;
                
                    m.clear();
                
                
                i++;
                j++;
            }
        }
        
        return ctr;
    }
};