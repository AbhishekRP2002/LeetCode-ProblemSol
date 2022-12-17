class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        int temp = 1;
        while(n>0)
        {
           
            if(n<temp)
            {
                break;
            }
            else
            {
                n-=temp;
                cnt++;
                temp++;
            }
        }
        
        return cnt;
    }
};