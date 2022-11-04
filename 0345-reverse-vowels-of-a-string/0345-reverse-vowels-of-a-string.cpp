class Solution {
public:
    string reverseVowels(string s) {
    int i=0;
        int j = s.size()-1;
        while(i<j)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='U' or s[i]=='O')
            {
                if(s[j]=='a' or s[j]=='e' or s[j]=='o' or s[j]=='i' or s[j]=='u' or s[j]=='A' or s[j]=='E' or s[j]=='I' or s[j]=='U' or s[j]=='O')
                {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else
                    j--;
            }
            else
                i++;
        }
        
        return s;
    }
};