class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
            // long long sum =0;
            // int n = nums.size();
            // int maxm = *max_element(nums.begin() , nums.end());
//              vector<int>v(maxm+k+1 , 0);
//             for(auto i:nums)
//                  v[i] = 1;
//         // long long sum = accumulate(nums.begin() ,nums.end() , 0);
//         int j = 1;
//         while(k>0)
//         {
//             if(v[j]==0)
//             {
//                 sum+=j;
//                 cout<<"sum:"<<sum<<"\n";
//                 k--;
//             }
//             j++;
        
//         }
        
//                return sum;
//         map<long long , long long>m;
//         for(auto i:nums)
//             m[i]++;
//         int j=1;
//         while(k>0)
//         {
//             if(m.count(j))
//                 j++;
//             else
//             {
//                 sum+=j;
//                 j++;
//                 k--;
//             }
//         }
        
//         return sum;
        
        long long sum = ((long)(k)*(long)(k+1))/2;
        set<int>s(nums.begin() , nums.end());
        for(auto i:s)
        {
            if(i<=k)
            {
                sum-=i;
                sum+=k+1;
                k++;
            }
            else
                break;
            
        }
        return sum;
    }
};