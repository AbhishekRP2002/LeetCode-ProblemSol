class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int ind  = 0;
        for(int i=0;i<n;++i)
        {
            if(word[i]==ch)
            {
                ind = i;
                break;
            }
        }
        
        reverse(word.begin() , word.begin() + ind+1);
        return word;
    }
};