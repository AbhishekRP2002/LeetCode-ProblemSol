class Solution {
public:
    void countNeg(vector<int>nums , int& cnt)
    {
        int i = 0 , j= nums.size()-1;
        while(j-i>1)
        {
            int mid = i + (j-i)/2;
            if(nums[mid] < 0)
            {
                i = mid;
            }
            else
            {
                j=mid-1;
            }
        }
        
        if(nums[j] < 0)
            cnt+= j+1;
        else if(nums[i] < 0)
            cnt+=i+1;
        else cnt=0;
    }
    int countNegatives(vector<vector<int>>& grid) {
//Brute Force Approach
        //         int m = grid.size();
//         int n = grid[0].size() , cnt=0;
        
//         for(int i=0;i<m;++i)
//         {
//             for(int j=0;j<n;++j)
//             {
//                 if(grid[i][j] < 0)
//                     cnt++;
//             }
//         }
        
        
//         return cnt;
        
        // Binary Search Approach
        
    int n = grid.size();
    int cnt = 0 ;
    
    for(int i=0;i<n;++i)
    {
        reverse(grid[i].begin() , grid[i].end());
        vector<int>v(grid[i]);
        countNeg(v,cnt);
    }
        
        return cnt;
    
    }
};