class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
       int n = pattern.size();
        map<string , int>word2i; // MAPPING WORD TO INDEX AND PATTERN KA LETTER TO INDEX
        map<char , int>pattern2i;
        
        istringstream rd(s);
        
        int i= 0;
        for(string word ; rd>>word;i++)
        {
            if(i==n or pattern2i[pattern[i]]!= word2i[word])
                return false;
            
            pattern2i[pattern[i]] = word2i[word] = i+1;
        }
        
        return i==n;
        
        
        
        
        
    }
};