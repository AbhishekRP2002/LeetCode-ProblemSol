class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int escDist = abs(0-target[0]) + abs(0-target[1]);
        int minDist = INT_MAX;
        int n = ghosts.size();
        for(int i=0;i<n;++i)
        {
            int dist = abs(target[0] - ghosts[i][0]) + abs(target[1] - ghosts[i][1]);
            minDist = min(minDist , dist);
        }
        
        if(escDist < minDist)
            return true;
        return false;
    }
};