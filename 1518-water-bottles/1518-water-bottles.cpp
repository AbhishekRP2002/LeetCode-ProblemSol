class Solution {
public:
    int numWaterBottles(int numB, int numE) {
       int ans = numB;
    while(numB > numE)
    {
         int rem = numB%numE;
        numB = (numB/numE);
       
        ans+=numB;
        numB += rem; 
    }
        cout<<ans<<" --- "<<numB;
        if(numB==numE)
            return ans+1;
        return ans;
    }
};