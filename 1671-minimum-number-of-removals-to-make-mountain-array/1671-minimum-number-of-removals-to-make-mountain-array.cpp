class Solution {
public:
     vector<int> lisOptimal(vector<int>& nums)
    {
        vector<int>dp(nums.size() , 1);
        vector<int>helper;
         helper.push_back(nums[0]);
         dp[0] = 1;
         int ind  =0;
        for(int i=1;i<nums.size() ;++i )
        {
            if(nums[i] > helper[ind])
            {
                 ind++;
                 helper.push_back(nums[i]);
            } 
            else {
                putproper(nums[i],helper,ind);
            }
            dp[i]=ind+1;
        }
        return dp;
        
    }
    
    
      void putproper(int val,vector<int>&arr,int lastind) //binary search to put element at correct position
    {
        int start=0;
        int end=lastind;
        int mid;
        while(start<end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==val)
                return ;
            else if(arr[mid]>val)
                end=mid;
            else
                start=mid+1;
        }
        arr[start]=val;
        
    }
    
    int minimumMountainRemovals(vector<int>& nums) {
         int n = nums.size();
        vector<int>inr = lisOptimal(nums);
        reverse(nums.begin() , nums.end());
        vector<int>dcr = lisOptimal( nums);
        reverse(dcr.begin() , dcr.end());
        reverse(nums.begin() , nums.end());
        int ans = INT_MAX;
        for(int i=0;i<n;++i)
        {
           if(inr[i]==1 or dcr[i]==1)
               continue;
            else
            ans = min(ans , n+1 -(inr[i]+dcr[i]));
            
        }
        return ans;
    }
};