class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int> , int>m;
        for(auto i:grid)
        {
            m[i]++;
            
        }
        
        int ctr = 0;
        
        for(int i= 0;i<grid.size();++i)
        {
             vector<int>temp;
            for(int j = 0;j<grid.size();++j)
            {
               temp.push_back(grid[j][i]);
                
            }
            
            if(m.find(temp)!=m.end())
            {
                ctr+=m[temp];
            }
        }
        
        return ctr;
        
        //col traversal and check
    }
};