class Solution {

public:
    static bool Compare(pair<int , int>& a , pair<int, int>& b)
    {
        if(a.second==b.second)
            return a.first < b.first;
         
       return a.second < b.second;
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin() , points.end());
        
        int x_end = points[0][1];
        int ctr = 1;
        for(int i=1;i<n;++i)
        {
            if(points[i][0]<=x_end)
            {
                x_end = min(x_end , points[i][1]);
                
            } 
            else
            {
                ctr++;
                x_end = points[i][1];
            }
        }
        
        return ctr;
    }
};