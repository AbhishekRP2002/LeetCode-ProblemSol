class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
//         int j = n-1;
//         int len = nums.size();
//         vector<int>temp(len ,0);
//         for(int i=0 , j=0;i<len;i+=2 , j++)
//         {
//             temp[i] = nums[j];
//         }
//         for(int i=1 ,j=n ;i<len;i+=2 ,j++)
//         {
//             temp[i] = nums[j];
//         }
        
//         return temp;

        
        int len = nums.size();
        vector<int>ans;
        for(int i=0;i<n;++i)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
       return ans;
    }
};