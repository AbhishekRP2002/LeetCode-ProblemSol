class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int l1 = s1.length();
        int l2 = s2.length();
        if(l1 != l2)
            return false;
        
        map<char, int>m1 , m2;
        
        for(auto i:s1)
            m1[i]++;
        for(auto i:s2)
            m2[i]++;
        
        int ctr = 0;
        for(int i=0;i<l1;++i)
        {
            if(s1[i] == s2[i]) continue;
            else
                ctr++;
        }
        
        if((ctr==2 or ctr==0) and m1==m2)
            return true;
        return false;
    }
};