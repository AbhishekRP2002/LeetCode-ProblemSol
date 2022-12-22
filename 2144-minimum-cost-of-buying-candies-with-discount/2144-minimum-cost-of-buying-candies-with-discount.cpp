class Solution {
public:
    int minimumCost(vector<int>& cost) {
       int n = cost.size();
        if(n==1)
            return cost[0];
        else if(n==2)
        {
            return cost[0] + cost[1];
        }
       
            sort(cost.begin() , cost.end());
            int sum = accumulate(cost.begin() , cost.end() , 0);
            
            for(int i=n-3;i>=0;i-=3)
            {
                sum-=cost[i];
            }
        
        
        return sum;
    }
};