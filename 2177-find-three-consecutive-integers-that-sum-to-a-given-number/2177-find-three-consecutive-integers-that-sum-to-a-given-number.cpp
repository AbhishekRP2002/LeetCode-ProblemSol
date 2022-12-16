class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long >ans(3);
        if(num%3==0)
        {
            ans[1]= (num/3);
            ans[0] = ans[1] - 1;
            ans[2] = ans[1] + 1;
            return ans;
        }
        
        ans.clear();
        return ans ;
    }
};