class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols  = grid[0].size();
        vector<vector<int>>diff(rows , vector<int>(cols));
        vector<int>rowV(rows);
        vector<int>colV(cols);

        
    for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
                if(grid[i][j])
                {
                    rowV[i]++;
                    colV[j]++;
                }
        }
        
//         for(auto i:rowV)
//             cout<<i<<" ";
        
//         cout<<"\n";
//         for(auto i:colV)
//             cout<<i<<" ";
//          cout<<"\n";     
        

        
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
                diff[i][j] = rowV[i] + colV[j] - (cols - rowV[i]) - (rows - colV[j]);
        }
        
        return diff;
    }
};