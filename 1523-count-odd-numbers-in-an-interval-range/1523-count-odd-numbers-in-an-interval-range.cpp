class Solution {
public:
    int countOdds(int low, int high) {
     int ctr =0;
        // for(int i=low ;i<=high;++i)
        // {
        //     if(i%2!=0)
        //         ctr++;
        // }
        // return ctr;
        
        int n = high - low +1;
        if(n&1==0)
            return n/2;
        if( n & 1)
        {
            if( low & 1)
                return n/2+1;
        }
        
        return n/2;
    }
};