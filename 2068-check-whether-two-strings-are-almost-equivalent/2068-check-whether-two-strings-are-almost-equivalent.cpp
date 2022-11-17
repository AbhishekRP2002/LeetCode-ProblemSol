class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
       unordered_map<char,int>m1;
         unordered_map<char,int>m2;
        for(auto i:word1)
            m1[i]++;
        for(auto i:word2)
            m2[i]++;
        
        for(int i=0;i<word1.size();++i)
        {
            if(abs(m1[word1[i]] - m2[word1[i]])>3)
                return false;
        }
        
          for(int i=0;i<word2.size();++i)
        {
            if(abs(m1[word2[i]] - m2[word2[i]])>3)
                return false;
        }
        
        return true;
        
    }
};