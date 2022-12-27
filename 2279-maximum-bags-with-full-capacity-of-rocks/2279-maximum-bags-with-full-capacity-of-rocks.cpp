class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rocks, int addB) {
        int n = cap.size();
        map<int , int>m;
        for(int i=0;i<n;++i)
        {
           rocks[i] = ( cap[i] - rocks[i]);
            
        }
        
         int cnt = 0;
   
        sort(rocks.begin() , rocks.end());
        
        for(int i=0;i<n;++i)
        {
            if(rocks[i]==0)
                cnt++;
            if(rocks[i] > 0)
            {
                if(rocks[i] <= addB and addB >0)
                {
                   
                    addB -= rocks[i];
                     rocks[i]=0;
                    cnt++;
                    
                } 
            }
                
        }
        
       
        
//         for(auto& x: rocks)
//         {
           
//             if(x==0)
//                 cnt++;
//         }
        
        
        return cnt;
    }
};