class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        if(n<3)
            return false;
        int aliceCnt = 0, bobCnt=0;
        vector<int>v(2,0);
//         A--->0 , B--->1
        for(int i=0;i<n;++i)
        {
            
            if(colors[i]=='A')
                {
                
                
                v[0]++;
                v[1] = 0;
                if(v[0]>2)
                {
                    aliceCnt++;
                    v[0]--;
                }
                
                
                }
            else
               { 
                
                v[1]++;
                v[0] = 0;
                if(v[1] > 2)
                {
                    bobCnt++;
                    v[1]--;
                }
               
               }
            
        }
        
        if(aliceCnt > bobCnt)
            return true;
        return false;
    }
};