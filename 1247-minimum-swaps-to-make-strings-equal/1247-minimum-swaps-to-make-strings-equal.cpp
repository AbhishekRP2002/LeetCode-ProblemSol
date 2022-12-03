class Solution {
public:
    int minimumSwap(string s1, string s2) {
        //if the both characters at some index are same
        //skip them
        //if they differ then calculate x and y count in any string
        
        int x=0;
        int y=0;
        for(int i=0;i<s1.length(); ++i)
        {
            if(s1[i]!=s2[i])
            {
                //if both char differ
                (s1[i]=='x') ? x++ : y++; 
            }
        }
        
        //if both x and y characters sum is odd we cant make them equal
        if((x+y)%2)
            return -1;
        int ans=(x+y)/2;
        if (x%2)
        {
            //if number of x are odd we need one more swap to make them equal
            ans+=1;
        }
        return ans; 
    }
};