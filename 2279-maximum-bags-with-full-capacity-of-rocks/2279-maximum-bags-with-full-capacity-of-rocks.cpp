class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rocks, int addB) {
        int n = cap.size();
        map<int , int>m;
        for(int i=0;i<n;++i)
        {
           rocks[i] = ( cap[i] - rocks[i]);
            cout<<rocks[i]<<" ";
        }
        
        
        cout<<"\n";
        sort(rocks.begin() , rocks.end());
        
        for(int i=0;i<n;++i)
        {
            if(rocks[i] > 0)
            {
                if(rocks[i] <= addB and addB >0)
                {
                   
                    addB -= rocks[i];
                     rocks[i]=0;
                    
                } 
            }
                
        }
        
        int cnt = 0;
        
        for(auto& x: rocks)
        {
            cout<<x<<" ";
            if(x==0)
                cnt++;
        }
        
        
        return cnt;
    }
};