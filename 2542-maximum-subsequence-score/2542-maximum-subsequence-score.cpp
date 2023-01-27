class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        // long long ans = 0;
        int n = nums1.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;++i)
            v.push_back({nums2[i] , nums1[i]});
        
        sort(v.rbegin() , v.rend());
        
        priority_queue<int, vector<int> , greater<int>>pq;
        
        long long  cur_sum = 0 , ans = INT_MIN;
        
        for(int i= 0;i<k;++i)
        {
            cur_sum+=v[i].second;
            pq.push(v[i].second);
        }
        
        ans = cur_sum*v[k-1].first;
        
        for(int i=k;i<n;++i)
        {
            int temp = pq.top();
            cur_sum-=temp;
            pq.pop();
            
            cur_sum+=v[i].second;
            pq.push(v[i].second);
            
            ans = max(ans , cur_sum*v[i].first);
        }
        
        return ans;
        
    }
};