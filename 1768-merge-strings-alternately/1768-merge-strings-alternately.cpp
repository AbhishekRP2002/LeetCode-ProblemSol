class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length() , m = word2.length();
        string ans = "";
        int i=0,j=0;
        while(i<n and j<m)
        {
            ans+=word1[i++];
            ans+=word2[j++];
        }
        
        if(n>m)
            ans+= word1.substr(i , n-i);
        else if(m>n)
            ans+= word2.substr(j , m-j);
        return ans;
    }
};