class Solution {
public:
    int util(int n , int k)
    {
        if(n==1)
            return 0;
        
        return (util(n-1 , k) + k  )%n;
    }
    int findTheWinner(int n, int k) {
        
//        return util(n,k)+1;
        int ans  = 0;
        for(int i=1;i<=n;++i)
        {
            ans = (ans + k)%i;
        }
        
        return ans+1;
       
    }
};