class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int ans = 0;

//         map<int, int>mp;
//         for(int i=0;i<n;++i)
//         {
//             mp[edges[i][0]]++;
//             mp[edges[i][1]]++;
//         }
        
//         int i=1;
//         while(i<=n+1)
//         {
//             if(mp[i]==n)
//                 ans = i;
//             i++;
//         }
        
//         return ans;
        
        // method 2 
    int temp1 = edges[0][0];
        int temp2 = edges[0][1];
        
        if(temp1 == edges[1][0] or temp1 == edges[1][1])
            ans = temp1;
        else ans = temp2;
        return ans;
        
    }
};