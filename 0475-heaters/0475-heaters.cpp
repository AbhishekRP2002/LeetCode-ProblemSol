class Solution {
public:
    int findRadius(vector<int>& nums, vector<int>& heat) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        sort(heat.begin() , heat.end());
        int start = 1 , end  = n-1;
        vector<int>v(n,INT_MAX);
        
        //calculate nearest RHS heater distance
        for(int i=0, h=0;i<n and h<heat.size();)
        {
            if(nums[i] <= heat[h])
            {
                v[i] = heat[h] - nums[i];
                i++;
            }
            else
                h++;
        }
        
        
        //calculate nearest LHS heater distance
        for(int i=n-1 , h = heat.size()-1; i>=0 and h>=0;)
        {
            if(nums[i] >= heat[h])
            {
                v[i] = min( v[i] , nums[i] - heat[h]);
                i--;
            }
            else
                h--;
        }
        
        return *max_element(v.begin() , v.end());
        
    }
};