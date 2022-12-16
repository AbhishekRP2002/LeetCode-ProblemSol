class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
//         sort(pairs.begin() , pairs.end());
//         int ctr = 0;
//         int temp = pairs[0][1];
//         for(int i=0;i<n-1;++i)
//         {
//             if( temp < pairs[i+1][0])
//             {
//                 ctr++;
//                 temp = pairs[i+1][1];
//             }
//         }
        
//         return ctr+1;
        sort(pairs.begin() , pairs.end());
        int maxm = INT_MAX , ctr= 0;
        for(int i = n-1;i>=0;--i)
        {
            if(pairs[i][1] < maxm)
            {
                ctr++;
                maxm = pairs[i][0];
            }
        }
      return ctr;
        
    }
};