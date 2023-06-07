class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        if(a==b and b==c)
            return 0;
       vector<int>v1(32,0); // for a and b
        vector<int>v2(32,0); // for c
        int minmFlips = 0;
        int ctr = 0;
        while(a>0)
        {
            v1[ctr] += a%2;
            a/=2;
            ctr++;
        }
        
        ctr = 0;
        while(b>0)
        {
             v1[ctr] += b%2;
            b/=2;
            ctr++;
        }
        
        ctr = 0;
        
        while(c > 0)
        {
             v2[ctr] += c%2;
            c/=2;
            ctr++;
        }
        
        for(int i=0;i<32;++i)
        {
            if(v1[i]==v2[i])
                continue;
            else
            {
                if(v1[i]==0 or v2[i]==0)
                minmFlips += abs(v1[i] - v2[i]);
            }
        }
        
        return minmFlips;
    }
};