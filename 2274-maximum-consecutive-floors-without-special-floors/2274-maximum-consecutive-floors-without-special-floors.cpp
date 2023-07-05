class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& sp) {
        int n = sp.size();
//         int ctr = 0 , ans = 0;
//         for(int i = bottom ; i <= top ;++i)
//         {
//             auto it =  find(sp.begin() , sp.end() , i);
//             if(it == sp.end())
//             {
//                 ctr++;
//                 continue;
//             }  
//             else
//             {
//                 ans = max(ans , ctr);
//                 ctr = 0;
           
//             }
//         }
        
//          ans = max(ans , ctr);
        
//         return ans ;
        
        sort(sp.begin() , sp.end());
        int temp = 0;
        int ans = 0;
        for(int i=1;i<n;++i)
        {
            temp = sp[i] - sp[i-1] - 1;
            ans = max(temp , ans);
        }
        
        int startTemp = sp[0] == bottom ? 0 : sp[0] - bottom;
        ans  = max(ans, startTemp);
        int endTemp = top==sp[n-1] ? 0 : top - sp[n-1];
        ans = max( ans , endTemp);
        return ans;
    }
};