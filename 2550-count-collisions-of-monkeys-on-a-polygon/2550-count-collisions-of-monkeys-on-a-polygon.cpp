class Solution {
public:
    long long int M = 1000000007;
         
    long long powOf2(int n)
     {
         if(n==1)
            return 2;
         long long int t = powOf2(n/2);
         t = (t*t)%M;
         if(n%2)
             return (2*t)%M;
         return t;
         
     }
    
    int monkeyMove(int n) {
     
        int ans = powOf2(n)-2;
        return  (ans < 0)? M + ans: ans;
    }

};