class Solution {
public:
    void dfs(vector<vector<int>>& grid1 ,vector<vector<int>>& grid2 ,int i, int j, bool &res , vector<int> &dr, vector<int> &dc)
    {
        if(i<0 or i>=grid2.size() or j<0 or j>=grid2[0].size() or grid2[i][j]!=1)
            return;
        
        if(grid1[i][j]==0)
        {
            res = false;
            return;
        }
        
        grid2[i][j] = 0; // marking visited island box 
        
        
        for(int m=0;m<4;++m)
        {
            dfs(grid1, grid2 , i+dc[m] , j+dr[m] ,res, dr, dc);
        }
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
          
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int row = grid1.size();
        int col = grid1[0].size() , sub_islands = 0;
        vector<int>dr = { -1, 1 , 0 ,0};
        vector<int>dc = {0,0, -1 , 1};
        for(int i = 0;i<row;++i)
        {
            for(int j= 0;j<col;++j)
            {
                if(grid2[i][j]==1)
                {
                bool res = true;
                dfs(grid1, grid2 ,i , j , res , dr, dc);
                if(res)
                    sub_islands+=1;
                }
            }
        }
        
        
        return sub_islands;
        
        
    }
};