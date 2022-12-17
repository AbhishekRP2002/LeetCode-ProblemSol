class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
       
        
          int x = c[1][0]-c[0][0],y = c[1][1]-c[0][1];

        for(int i = 2; i < c.size(); i++){
            if((c[i][0]-c[0][0]) * y !=  (c[i][1]-c[0][1]) * x)
                return false;
        }
        return true;
        
        
        
    }
};