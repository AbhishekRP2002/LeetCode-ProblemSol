class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       int k = candyType.size();
        k /= 2;
        
        unordered_map<int , int>m;
        for(auto i:candyType)
            m[i]++;
        
        int msize  = m.size();
        if(msize > k)
            return k;
        return msize;
        
    }
};