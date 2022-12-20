class Solution {
public:
    vector<int>nfreq;
    vector<int> util(int n)
    {
        vector<int>digitFreq(10,0);
        
        while(n>0)
        {
            int rem = n%10;
            n = n/10;
            digitFreq[rem]++;
        }
        return digitFreq;
    }
    bool reorderedPowerOf2(int n) {
     
        nfreq = util(n);
        for(int i= 0;i<32;++i)
        {
            if(nfreq == util(1<<i))
                return true;
        }
        
        return false;
    }
};