class Solution {
public:
    bool detectCapitalUse(string word) {
        
        string UpperWord , lowerWord ;
        for(auto i:word)
        {
            UpperWord.push_back(toupper(i));
            lowerWord.push_back(tolower(i));
        }
        
        // cout<<UpperWord<<" "<<lowerWord;
        
        bool flag = false;
        int ctr  =0;
        for(int i= 0; i<word.length();++i)
        {
            if(i==0 and word[i]>=65 and word[i]<=90)
            {
                flag = true;
                ctr++;
            } 
            else if(word[i]>=65 and word[i]<=90)
                ctr++;
        }
        
        if((flag and ctr==1) or (UpperWord == word) or (lowerWord == word))
            return true;
        return false;
        
    }
};