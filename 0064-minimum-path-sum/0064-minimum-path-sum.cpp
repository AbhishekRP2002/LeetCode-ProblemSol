class Solution {
public:
//     void pathSumCalc(vector<vector<int>>& grid , int curSum , int& minSum , int i , int j , int m , int n)
//     {
//         if((i == m-1 ) and (j == n-1))
//         {
//             minSum = min(minSum , curSum);
//             return;
            
//         }
        
//         if( i>m-1  or j>n-1)
//             return;
        
//         if( i< m-1 and j<n-1)
//         {
//             pathSumCalc(grid, curSum + grid[i+1][j] , minSum , i+1 , j , m , n);
//             pathSumCalc(grid, curSum + grid[i][j+1] , minSum , i , j+1 , m ,n );
//         }
//         else if( i== m-1)
//         {
//             pathSumCalc(grid, curSum + grid[i][j+1] , minSum , i , j+1 , m ,n );
//         }
//         else if( j== n-1)
//         {
//               pathSumCalc(grid, curSum + grid[i+1][j] , minSum , i+1 , j , m , n);
//         }
    
    

    int minPathSum(vector<vector<int>>& grid) {
//         int curSum = grid[0][0] , minSum ;
//          int m = grid.size() , n = grid[0].size();
//         vector<vector<int>>dp( m , vector<int>(n,-1));
       
//         int i= 0, j= 0;
     
//         return minSum;
        
    int m = grid.size();// row
	int n = grid[0].size(); // column
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j != 0) {
				grid[i][j] = grid[i][j] + grid[i][j - 1];
			} else if (i != 0 && j == 0) {
				grid[i][j] = grid[i][j] + grid[i - 1][j];
			} else if (i == 0 && j == 0) {
				grid[i][j] = grid[i][j];
			} else {
				grid[i][j] = min(grid[i][j - 1], grid[i - 1][j])
						+ grid[i][j];
			}
		}
	}

	return grid[m - 1][n - 1];
    }
};