class Solution {
public:
   static  bool compare(int a , int b)
    {
        int cnt1 = __builtin_popcount(a);
        int cnt2 = __builtin_popcount(b);
        if(cnt1==cnt2)
            return a<b;
        return cnt1 < cnt2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        // count set bits 
        sort(arr.begin() , arr.end()  , compare);
        return arr;
    }
};