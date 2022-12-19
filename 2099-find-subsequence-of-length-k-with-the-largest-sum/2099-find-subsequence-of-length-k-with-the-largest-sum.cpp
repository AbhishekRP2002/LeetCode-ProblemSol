class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
//         vector<pair<int, int>>v;
//          int n = nums.size();
//         for(int i=0;i < n;++i)
//         {
//             v[i]={nums[i] , i};
//         }
//         sort(v.begin() , v.end());
       
//         vector<int>ans;
//         int ctr = 0;
//     for(auto it:v)
//     {
//         if(ctr >= n-k+1 and ctr<n)
//             ans[it.second] = it.first;
//             ctr++;
//     }
        
//         return ans;
         priority_queue<pair<int,int>>pq;
    vector<int>res;
    if(nums.size()==k)return nums;
    for(int i=0;i<nums.size();i++)
    {
        pq.push(make_pair(nums[i],i));
       
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_pq;
    
    for(int i=0;i<k;i++)
    {
        pair<int,int>p=pq.top();
        min_pq.push(make_pair(p.second,p.first));
        pq.pop();            
    }
    while(!min_pq.empty())
    {
        res.push_back(min_pq.top().second);
        min_pq.pop();
    }
    return res;
    }
};