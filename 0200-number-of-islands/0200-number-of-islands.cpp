class Solution {
public:
    
    void mark_islands(vector<vector<char>>& mat , int x , int y , int row , int col, vector<int>& dr, vector<int> &dc)
    {
        if(x<0 or x>=row or y<0 or y>=col or mat[x][y]!='1')
            return ;
        mat[x][y]='2';
        
       for(int i=0;i<dr.size();++i)
       {
         
           mark_islands(mat , x+dr[i], y+dc[i], row, col, dr, dc);
       }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<int>dr = {-1, 1, 0 ,0};
        vector<int>dc = { 0, 0 , -1, 1};
        if(row==0)
            return 0;
        int islands =0;
        for(int i =0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                if(grid[i][j]=='1')
                {
                    mark_islands(grid , i, j , row , col , dr, dc);
                    islands +=1;
                }
            }
        }
        return islands;
    }
};