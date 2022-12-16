class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
       
//         vector<int>ans(queries.size());
//         int n = nums.size();
//         sort(nums.begin() , nums.end());
//         map<int , int>m;
//         for(int i= 0;i<queries.size();++i)
//             m[queries[i]] = i;
        
//         sort(queries.begin() , queries.end());
//         int curr_sum = 0;
//         vector<int> pre_sum;
        
//         for(int i=0;i<n;i++)
//         {
//             sum += nums[i];
//             pre_sum.push_back(sum);           // storing prefix sum
//         }
//         int len = 0 , j= 0 , i =0;
//         while(j<queries.size())
//         {
//             curr_sum+=nums[i];
//             if(curr_sum < queries[j] and i<n)
//             {
//                 len++;
//                 i++;
                
//             }
//             else
//             {
//                 ans[m[queries[j]]] = len;
//                 j++;
                
//             }
//         }
        
//         return ans;
        
        int n = nums.size();
        int m = queries.size();
        
        sort(nums.begin(),nums.end());
        int sum = 0;
        vector<int> pre_sum;
        
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            pre_sum.push_back(sum);        
        }
        
        vector<int> ans(m,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pre_sum[j] <= queries[i])
                    ans[i] = j+1;          
                else break;
            }
        }
        return ans;
    }
};