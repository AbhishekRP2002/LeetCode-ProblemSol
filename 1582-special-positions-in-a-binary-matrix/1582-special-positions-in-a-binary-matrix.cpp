class Solution {
public:
    int numSpecial(vector<vector<int>>& grid) {
      int n = grid.size();
        int m = grid[0].size() , ctr =0;
        vector<int>rowV(n) , colV(m);
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
                if(grid[i][j])
                {
                    rowV[i]++;
                    colV[j]++;
                }
        }
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
                if(grid[i][j] and rowV[i] == 1 and colV[j]==1)
                {
                    ctr++;
                }
        }
        
        
        return ctr;
    }
};