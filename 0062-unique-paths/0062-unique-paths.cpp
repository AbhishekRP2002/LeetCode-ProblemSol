class Solution {
public:
//     int pathCount(int  m , int n , int i , int j)
//     {
//         if(i==m-1 and j == n-1)
//             return 1;
//         else if( i > m-1 or j > n-1)
//             return 0;
        
//         int left = pathCount(m , n , i+1 ,j);
//         int right = pathCount(m ,n , i ,j+1);
        
//         return left + right ;
//     }
    
    int pathCount(int m ,int n,int i,int j , vector<vector<int>>& dp)
    {
       
        if(i==m-1 and j == n-1)
          return 1;
        if(i >= m or j >= n)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        else
        return dp[i][j] = pathCount(m ,n, i+1 , j , dp) + pathCount(m ,n, i , j+1 , dp);
    }
    int uniquePaths(int m, int n) {
        int i= 0 , j =0;
       //  int ans  = pathCount(m , n , i ,j);
//         The recursive approach will give TLE
        
        vector<vector<int>>dp(m , vector<int>(n,-1));
        int ans  = pathCount(m , n , i ,j , dp);
        return ans;
    }
};