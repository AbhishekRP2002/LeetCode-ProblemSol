class Solution {
public:
    int minSteps(string s, string t) {
        map<int , int>m1;
        map<int , int>m2;
        for(auto i:s)
            m1[i-'a']++;
        for(auto i:t)
            m2[i-'a']++;
        int steps = 0;
        for(auto i:m1)
        {
            if(!m2.count(i.first))
                steps+=i.second;
            else
            {
                if(i.second != m1[i.first])
                    steps+= abs(i.second - m2[i.first]);
            }
        }
        
            for(auto i:m2)
        {
            if(!m1.count(i.first))
                steps+=i.second;
            else
            {
                if(i.second != m1[i.first])
                     steps+= abs(i.second - m1[i.first]);
            }
        }
        
        return steps;
    }
};