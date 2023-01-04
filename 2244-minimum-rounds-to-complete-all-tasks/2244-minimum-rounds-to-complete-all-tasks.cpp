class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size();
        unordered_map<int, int>m;
        for(auto i:tasks)
            m[i]++;
        int ctr = 0;
        for(auto i:m)
        {
            if(i.second == 1)
                return -1;
            else
            {
                if(i.second%3==0)
                    ctr+=(i.second/3);
                else if(i.second%3 == 1)
                    ctr+=(i.second/3 + 1);
                else if(i.second%3==2)
                {
                    ctr+=(i.second/3 + 1);
                }
            }
        }
        
        return ctr;
    }
};