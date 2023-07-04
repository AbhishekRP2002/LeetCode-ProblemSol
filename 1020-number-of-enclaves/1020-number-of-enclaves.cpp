class Solution {
public:
    int ctr = 0;
    vector<int>dirX = {0,0,-1,1};
    vector<int>dirY = {-1,1,0,0};
    void dfs(vector<vector<int>>& grid , int i , int j)
    {
        if(i < 0  or i>=grid.size()) return;
        if(j < 0 or j>=grid[0].size()) return;
        
        if(grid[i][j] != 1) return;
        
        grid[i][j] = 0; //visited marking 
        ctr++;
        
        
        for(int k=0;k<4;++k)
        {
            dfs(grid,i+dirX[k], j+dirY[k]);
        }
        
       
       
    }

    
     int numEnclaves(vector<vector<int>>& grid) {
         
        int ans = 0;
        
        
        int rows = grid.size();
        int cols = grid[0].size();
         
         for(int i=0;i<rows;++i)
         {
             
                 dfs(grid , i , 0);
                 dfs(grid , i , cols - 1);
         }
         
         for(int i = 0 ;i < cols ;++i)
         {
           
                 dfs(grid , 0 , i);
                 dfs(grid, rows - 1 , i);
         }
         
         
         ctr = 0;
        
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                if(grid[i][j] == 1)
                {
                    dfs(grid,i,j);
                    ans+=ctr;
                }
            }
        }
        
        return ctr;
    }
};