class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
       int n = pattern.size();
        map<string , int>word2i; // MAPPING WORD TO INDEX AND PATTERN KA LETTER TO INDEX
        map<char , int>pattern2i;
        string s2 = s;
        
        istringstream rd(s);
        istringstream rd2(s2);
        
        int i= 0;
        int ctr = 0;
        string str ;
        
        while(rd2>>str)
            ctr++;
        
        cout<<ctr<<" "<<n<<" "<<"\n";
        
        if(ctr != n)
            return false;
        
        for(string word ; rd>>word;i++)
        {
            if( pattern2i[pattern[i]]!= word2i[word])
                return false;
            
            pattern2i[pattern[i]] = word2i[word] = i+1;
        }
        
        return i==n;
        
        
        
        
        
    }
};