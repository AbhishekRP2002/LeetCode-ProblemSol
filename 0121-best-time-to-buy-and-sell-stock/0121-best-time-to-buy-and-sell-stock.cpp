class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0 , m=prices[n-1];
        int ctr=0;
        
//         if(n==1)
//             return 0;
//         for(int i=0;i<n;++i)
//         {
            
//             if(prices[i]>prices[i+1])
//                 ctr++;
            
//         }
//         if(ctr==n-1)
//             return 0;
//         if(is_sorted(prices.begin(), prices.end()))
//             return (prices[n-1]-prices[0]);
        
        for(int i=n-2;i>=0;i--)
        {
            if(prices[i]<m)
                profit= max(profit, m-prices[i]);
            
              m=max(prices[i],m);
        }
      
    
    return profit;
    }
};