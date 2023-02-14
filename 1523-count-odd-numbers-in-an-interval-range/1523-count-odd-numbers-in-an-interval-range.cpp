class Solution {
public:
    int countOdds(int low, int high) {
     int ctr =0;
        for(int i=low ;i<=high;++i)
        {
            if(i%2!=0)
                ctr++;
        }
        return ctr;
    }
};