class Solution {
public:
    unsigned int M = 1000000007;
    int maximumProduct(vector<int>& nums, int k) {
        int n = nums.size();
     //   sort(nums.begin(), nums.end());
        long long int ans  = 1;
        priority_queue<int ,vector<int>  , greater<int>>pq;
        for(auto i:nums)
            pq.push(i);
        
        while(k--)
        {
           int minm = pq.top();
            pq.pop();
            minm+=1;
            pq.push(minm);
        }
        
       while(pq.size())
       {
           int temp = pq.top();
           ans = (ans*temp)%M;
           pq.pop();
       }
        
        return ans%M;
       
    }
};