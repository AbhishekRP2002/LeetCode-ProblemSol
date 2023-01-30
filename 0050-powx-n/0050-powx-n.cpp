class Solution {
public:
    long double myPow(double x, int n) {
   //      if(x==1 || n==0)
   //          return 1;
   //      else if(n>0)
   //          return  myPow(x,n-1)*x;
   //      else if(n<0 || (x<1 &&x>0))
   //          return (1/x)*myPow(x,n+1);
   // return 0; }
        
        if(x==1 or n==0)
            return 1;
        if(n==2)
            return x*x;
        if(n<0)
            return (1/x)*myPow(1/x,-(n+1));
        if(n%2)
            return x*myPow(myPow(x,n/2) , 2);
        else
            return myPow(myPow(x,n/2) , 2);
    }
        
};