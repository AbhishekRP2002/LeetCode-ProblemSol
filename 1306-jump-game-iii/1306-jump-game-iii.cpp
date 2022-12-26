class Solution {
public:
    // create a visited array to avoid infinite loop
   
    bool JumpUtil(vector<int>&nums ,vector<bool>& vis , int ind , int n)
    {
        if(ind >= n or ind<0)
            return false;
        
        if(vis[ind]==false)
            vis[ind] = true;
        else
            return false;
        
        if(nums[ind]==0)
            return true;
        
        return JumpUtil(nums , vis , ind + nums[ind] , n) or JumpUtil(nums ,vis , ind - nums[ind] , n);
        
    }
    bool canReach(vector<int>& arr, int startInd) {
        int n = arr.size();
        int i = startInd;
        int val = arr[i];
        int jumpR = i+val  , jumpL = i -val;
         vector<bool>vis( n , false);
        
        bool ans = JumpUtil(arr , vis , i , n) ;
        return ans;
        
        
     
    }
};