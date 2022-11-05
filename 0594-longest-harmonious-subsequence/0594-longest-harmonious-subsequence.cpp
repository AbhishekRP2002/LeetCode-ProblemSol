class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int n = nums.size();
        map<int,int>m;
        for(auto i:nums)
            m[i]++;
        
           int ans = 0;
        for(auto i:m)
        {
            int temp = i.first+1;
          
            if(m.count(temp))
            {
                i.second += m[temp]; 
                if(i.second > ans)
                ans = i.second;
                cout<<i.first<<"-->"<<i.second<<"\n";
            }
              
        }
        
        cout<<"\n";
     
//         for(auto i:m)
//         {
//             cout<<i.first<<"-->"<<i.second<<"\n";
//             if(i.second > ans)
//                 ans = i.second;
//         }
        
        return ans;
        
        
    }
};