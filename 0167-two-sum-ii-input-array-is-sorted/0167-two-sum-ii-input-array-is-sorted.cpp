class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
        int n = nums.size();
        int start =0;
        int end  = n-1;
    
        while(start<end)
        {
            int sum = nums[start] + nums[end];
            if(sum==target)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                break;
            }
            else if(sum > target)
            {
                end--;
            }
            else if(sum < target)
            {
                start++;
            }
        }
        
        return ans ;
    }
};