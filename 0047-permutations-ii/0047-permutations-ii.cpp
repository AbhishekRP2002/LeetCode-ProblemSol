class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
     set<vector<int>>st;
        vector<vector<int>>res;
        
        permute(nums , 0 , st);
        
        for(auto i:st)
            res.push_back(i);
        return res;
    }
    
    void permute(vector<int>& nums , int begin , set<vector<int>>& st)
    {
        if(begin == nums.size()-1)
        {
            st.insert(nums);
            return;
        }
        else
        {
            for(int i=begin ; i<nums.size();++i)
            {
                swap(nums[i], nums[begin]);
                permute(nums , begin+1 , st);
                swap(nums[i] , nums[begin]);
            }
        }
    }
};