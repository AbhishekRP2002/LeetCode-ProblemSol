class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n = word.length();
        vector<int>ans(n,0);
        long long int t = 0 , i=0;
        while(i<n)
        {
            t = (t*10 + word[i]-'0')%m;
            if(t==0)
                ans[i]=1;
            i++;
        }
        
        return ans;
    }
};