class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        double ans = 0;
        int n = quality.size();
        vector<pair<double, int>>v;
        for(int i=0;i<n;++i)
        {
            v.push_back({wage[i]*1.0/quality[i] , quality[i]});
            
        }
        
        sort(v.begin() , v.end());
        
        int cur = 0;
        
        priority_queue<int>pq;
        
        for(int i = 0;i<k;++i)
        {
            cur+=v[i].second;
                pq.push(v[i].second);
        }
        
        ans = cur*v[k-1].first;
        
        for(int i=k;i<n;++i)
        {
            int temp = pq.top();
            cur-=temp;
            pq.pop();
            
            cur+=v[i].second;
            pq.push(v[i].second);
            
            ans = min( ans , cur*v[i].first);
        }
        
        return ans;
          
    }
};