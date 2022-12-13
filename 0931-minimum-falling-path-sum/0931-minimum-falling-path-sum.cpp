class Solution {
public:
    int dp[101][101];
    int minFallingPathSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        //for first row the min falling sum will be the number itself
        //dp table we will create to store the values
        for(int i= 0 ;i< cols ;++i)
            dp[0][i] = mat[0][i];
        
        int ans ;
        
        for(int i = 1;i<rows;i++)
        {
            for(int j = 0;j<cols;++j)
            {
                int minm = INT_MAX;
                if(i -1 >= 0) minm = min(minm , dp[i-1][j]);
                if((i-1)>=0 and (j-1)>=0) minm = min( minm , dp[i-1][j-1]);
                if((i-1)>=0 and (j+1)<cols) minm = min(minm , dp[i-1][j+1]);
                
                dp[i][j] = minm + mat[i][j];
                    
            }
            
        }
        
        // ans = *min_element(dp[rows-1], dp[rows-1] + rows);
        ans = dp[rows-1][0];
        for(int i= 0;i<cols;++i)
            ans = min(ans , dp[rows-1][i]);
        return ans;
        
        
        
        
    }
};