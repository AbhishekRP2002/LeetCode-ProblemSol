class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long int n=beans.size();
        sort(beans.begin() , beans.end());
        long long remain = 0;
        for(int i=0;i<n;++i)
        {
            remain = max(remain, 1LL*beans[i]*(n-i));
        }
        
        long long sum = accumulate(beans.begin() , beans.end() , 0LL);
        return sum - remain;
        
    }
};