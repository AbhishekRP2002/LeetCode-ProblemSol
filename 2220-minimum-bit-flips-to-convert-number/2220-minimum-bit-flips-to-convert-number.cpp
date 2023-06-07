class Solution {
public:
    int minBitFlips(int start, int goal) {
     vector<int>vStart(32,0);
        vector<int>vGoal(32,0);
        int ans = 0;
        
        int ctr = 0;
        while(start > 0)
        {
            vStart[ctr] = start%2;
            start/=2;
            ctr++;
        }
        
        ctr = 0;
        while(goal > 0)
        {
            vGoal[ctr] = goal%2;
            goal/=2;
            ctr++;
        }
        
        for(int i= 0;i<32;++i)
        {
            if(vStart[i] != vGoal[i])
                ans+= abs(vStart[i] - vGoal[i]);
        }
        
        
        return ans;
    }
};