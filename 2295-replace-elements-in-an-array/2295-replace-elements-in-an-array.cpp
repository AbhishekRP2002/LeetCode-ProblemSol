class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        int n = nums.size();
        map<int,int>m; // store index and nums[i]
        for(int i=0;i<n;++i)
        {
            m[nums[i]] = i;
        }
        
        vector<int>ans(n,0);
        ans = nums;
        int len = op.size();
        for(int i=0;i<len;++i)
        {
            int ind = m[op[i][0]];
            ans[ind] = op[i][1];
            m.erase(op[i][0]);
            m[ans[ind]] = ind;
        }
        return ans;
        
    }
};