class Solution {
public:
   
    int minimumDeviation(vector<int>& nums) {
      
        
        int n = nums.size();
       
        priority_queue<int>pq;
        for(auto& x:nums)
        {
            if(x&1)
                x*=2;
        }
        
         int minm = *min_element( nums.begin() , nums.end());
        
        for(auto& i: nums)
            pq.push(i);
        
        int topElement = pq.top();
        int min_dif = INT_MAX; 
        while((pq.top() & 1) == 0)
        {
            topElement = pq.top();
            pq.pop();
            int diff = topElement - minm;
            min_dif = min(min_dif , diff);
            topElement/=2;
            if(topElement < minm)
                minm = topElement;
            pq.push(topElement);
            
        }
        
        min_dif = min( min_dif , pq.top() - minm);
        
        return min_dif;
        
    }
};