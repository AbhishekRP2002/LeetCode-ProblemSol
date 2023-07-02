class Solution {
public:
   int curr = 0;
    vector<int>dirX = {1,-1, 0, 0};
    vector<int>dirY = { 0, 0 , -1 , 1};
    void dfs(vector<vector<int>>& grid, int i , int j)
    {
        if(i < 0 or i >= grid.size()) return;
        if(j < 0 or j >= grid[0].size()) return;
        if(grid[i][j] != 1) return;
        
        curr+=1;
        grid[i][j] = 2;
        
        for(int k=0;k<4;++k)
        {
            dfs(grid, i+dirX[k] , j+dirY[k]);
            
        }
        
        
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m =  grid.size();
        int n = grid[0].size();
        int maxArea = 0;
        for(int i=0;i<m;++i)
        {
            for(int j = 0;j < n;++j)
            {
                if(grid[i][j] == 1)
                {
                    
                    dfs(grid , i , j);
                    maxArea = max(maxArea , curr );
                    curr = 0;
                }
            }
            
        }
        
        return maxArea;
    }
};