class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
       
        int n = shifts.size();
        vector<long long int>prefSum(n,0);
        prefSum[n-1] = shifts[n-1];
        for(int i =n-2;i>=0;i--)
        {
            prefSum[i] = shifts[i] + prefSum[i+1];
        }
        
        for(int i= 0;i<n;++i)
        {
            int shiftByCount  = (s[i] - 'a' + prefSum[i])%26;
            s[i] = 'a' + shiftByCount;  
        }
        
        return s;
        
        
    }
};