class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
//         sort(piles.begin() , piles.end());
//       int n = piles.size();
//         if(piles[n-1]==1)
//             return 1;
//         int i = n-1;
//         while(k--)
//         {
//             piles[i] = (piles[i] - piles[i]/2);
//             i--;
//         }
        
//         int ans = accumulate(piles.begin() , piles.end() ,0);
        
//         return ans;
        priority_queue<int>pq;
        int sum = 0;
        for(int i=0;i<piles.size();++i)
        {
            pq.push(piles[i]);
            sum+=piles[i];
        }
        
        
        while(k--)
        {
            int temp = pq.top();
            pq.pop();
            sum -= (temp/2);
            pq.push(temp-temp/2);
        }
        
        return sum;
    }
};