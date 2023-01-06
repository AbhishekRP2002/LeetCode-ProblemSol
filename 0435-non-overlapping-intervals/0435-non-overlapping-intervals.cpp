class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin() , intervals.end());
        int ctr  =0;
        int x_limit= intervals[0][1];
        for(int i=1;i<n;++i)
        {
            if(intervals[i][0] < x_limit)
            {
                ctr++;
                x_limit = min( x_limit , intervals[i][1]);
                
            }
            else
                x_limit = intervals[i][1];
        }
        
        return ctr;
        
    }
};