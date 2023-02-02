class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        Util(nums , 0 , ans);
        return ans;
    }
    
    void Util(vector<int>& nums  , int begin ,  vector<vector<int>>& ans)
    {
        if(begin==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        else
        {
            for(int i=begin;i<nums.size();++i)
            {
                swap(nums[i] , nums[begin]);
                Util(nums , begin+1, ans);
                swap(nums[i] , nums[begin]);
            }
        }
    }
};