class Solution {
public:
    int climbStairs(int n) {
//         int dp[44]={0};
//         if(n<0)
//             return 0 ;
//         else if(n==0)
//             return 1;
        
//         if((dp[n]!=0))
//             return dp[n];
            
//        return dp[n] = climbStairs(n-1)+climbStairs(n-2);//TLE APPROACH
        int steps[n];
        if(n==1)
        {
             return 1;
        }
        if(n==2)
            return 2;
        steps[0] = 1;
        steps[1] = 2;
        for(int i=2;i<n;++i)
        {
            steps[i] = steps[i-1] + steps[i-2];
        }
        
        return steps[n-1];

    }
};