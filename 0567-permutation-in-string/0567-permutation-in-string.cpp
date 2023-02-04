class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<int,int>m1; // for s1
        map<int, int>m2; //for s2
        int n= s1.size() , m = s2.size();
        for(int i=0;i<n;++i)
            m1[s1[i]-'a']++;
        for(int i=0;i<m;++i)
            m2[s2[i]-'a']++;
        
         sort(s1.begin(), s1.end());
        int i=0, j=0 , k=n ;
        bool ans = false;
        while(j<m)
        {
            if(j-i+1 < k)
                j++;
            else if((j-i+1) == k)
            {
                string temp = s2.substr(i,n);
                sort(temp.begin() , temp.end());
                if(temp==s1)
                    return true;
                else
                {
                    i++;
                    j++;
                }
            }
            
            
        }
        
        return false;
    }
};