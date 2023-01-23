class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool>mark(n+1,false);
        
        map<int,int>m;
        
        for(int i=0;i<trust.size();++i)
        {
            if(mark[trust[i][0]]=true)
                continue;
            else
            mark[trust[i][0]] = true;
        }
        
        for(int i=0;i<trust.size();++i)
        {
            m[trust[i][1]]++;
        }
        
        int ans = -1;
        
        for(int i=1;i<mark.size();++i)
        {
            if(mark[i]==false and m[i]==n-1)
                ans=i;
        }
        
        
        
        return ans;
    }
};