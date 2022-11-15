class Solution {
public:
    int maxIceCream(vector<int>& costs, int c) {
        
        int n = costs.size();
        sort(begin(costs) , end(costs));
          int ctr = 0;
        for(int i=0;i<n;++i)
        {
           if(costs[i]<=c)
           {
               ctr++;
               c-=costs[i];
           }
        }
        
        
        return ctr;
    }
};