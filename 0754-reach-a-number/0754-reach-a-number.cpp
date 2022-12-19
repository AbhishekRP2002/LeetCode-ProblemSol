class Solution {
public:
    int reachNumber(int target) {
       
        if(target < 0)
            target = (-1)*target;
        long long int sum = 0;
        int  x = 0 ;
        int step = 0;
        while( sum < target)
        {
            x++;
            sum+=x;
            
        }
        
        while((sum - target)&1)
        {
            x++;
            sum+=x;
        }
        
        return x;
    }
};