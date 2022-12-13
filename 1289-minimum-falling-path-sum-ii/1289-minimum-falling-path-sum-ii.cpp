class Solution {
public:
    int dp[201][201];
    int minFallingPathSum(vector<vector<int>>& grid) {
        
//         int rows = grid.size();
//         int cols = grid[0].size();
//         for(int i= 0;i<cols;i++)
//             dp[0][i] = grid[0][i];
//         for(int i=1;i<rows ;++i)
//         {
//             for(int j = 0;j<cols;++j)
//             {
//                 int minm = INT_MAX;
//                 if((i-1) >= 0 and (j-1) >= 0)
//                     minm = min( minm , dp[i-1][j-1]);
//                 if((i-1) >=0 and (j+1) < cols)
//                     minm = min( minm , dp[i-1][j+1]);
                
//                 dp[i][j] = minm + grid[i][j];
//             }
            
//             cout<<*min_element(dp[i] , dp[i] + cols)<<" ";
            
//         }
        
//         cout<<"\n";
        
//        int ans = *min_element(dp[rows-1] , dp[rows-1] + cols);
//         return ans;
             int n = grid.size() ;
        vector<int> dp ;
        dp = grid[n-1] ;
        
        for(int i=n-2;i>=0;i--){
            int firstmin=INT_MAX,secondmin=INT_MAX,firstminindex ;
            for (int j=0;j<n;j++){
                if (firstmin>dp[j]){                    //calculating first min
                    firstmin = dp[j] ;
                    firstminindex = j ;
                }
            }for (int j=0;j<n;j++){
                if (j==firstminindex)continue ;                          //second min
                secondmin = min(secondmin,dp[j]) ;
            }
            for (int j=0;j<n;j++){
                if (j==firstminindex) dp[j]=grid[i][j]+secondmin ;  
                else dp[j] = grid[i][j]+firstmin ;
            }
        }
        return *min_element(dp.begin(),dp.end());
        
    }
};