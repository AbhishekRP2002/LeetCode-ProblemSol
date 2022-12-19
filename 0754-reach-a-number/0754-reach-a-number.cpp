class Solution {
public:
    int reachNumber(int target) {
       
        if(target < 0)
            target = (-1)*target;
        long long int sum = 0;
        int  x = 0 ;
        int step = 0;
//         while( sum < target)
//         {
//             x++;
//             sum+=x;
            
//         }
        
//         while((sum - target)&1)
//         {
//             x++;
//             sum+=x;
//         }
        while(x>=0)
        {
            x++;
            sum+=x;
            if(sum<target)
                continue;
            else
            {
                if((sum - target)%2==0)
                    return x;
                else
                    continue;
            }
        }
        return 0;
    }
};