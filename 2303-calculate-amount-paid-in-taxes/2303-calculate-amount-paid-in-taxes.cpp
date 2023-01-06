class Solution {
public:
    double calculateTax(vector<vector<int>>& nums, int income) {
        double ans = 0;
        if(income == 0)
            return ans ;
        int n = nums.size();
        int cur = nums[0][0];
       
        if(nums[0][0] > income)
            return income*(nums[0][1]/100.0);
        
         income-=cur;
        
        ans += cur*(nums[0][1]/100.0);
        for(int i = 1;i<n;++i)
        {
            
            if(nums[i][0] - nums[i-1][0] >= income)
                cur = income;
            else
                cur =  nums[i][0] - nums[i-1][0];
            
            // cout<<cur<<" "<<"\n";
            
            ans += cur*(nums[i][1]/100.0);
            
            income -= cur; 
            if(income == 0)
                break;
            else
                continue;
        
            
        }
        
        return ans;
        
    }
};