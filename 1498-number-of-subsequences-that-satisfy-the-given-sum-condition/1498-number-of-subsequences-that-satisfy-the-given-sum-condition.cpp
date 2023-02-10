class Solution {
public:
     int M =  (int)1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        
         vector<int> pow(n,1);
    
    for(int i=1; i<n; i++){
        pow[i] = (pow[i-1] * 2) % M;   
    }
        
        int i= 0 , j= n-1 , ans = 0;
        while(i<=j)
        {
            if(nums[i] + nums[j] <= target)
            {
                ans=(ans + (int)pow[j-i])%M;
                i++;
            }
            else
                j--;
                
        }
        
        return ans%M;
    }
};