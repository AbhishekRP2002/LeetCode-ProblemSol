class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& mat) {
        int n = mat.size();
        if(n<=1)
            return mat;
        vector<vector<int>>ans;
        sort(mat.begin() , mat.end());
        ans.push_back(mat[0]);
        for(int i=1;i<n;++i)
        {
            if(ans.back()[1] >= mat[i][0])
                ans.back()[1] = max( ans.back()[1] , mat[i][1]);
            else
                ans.push_back(mat[i]);
        }
        
        return ans;
    }
};