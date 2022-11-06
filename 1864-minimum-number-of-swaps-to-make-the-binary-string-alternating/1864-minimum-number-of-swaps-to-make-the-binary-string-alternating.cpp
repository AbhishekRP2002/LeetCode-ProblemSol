class Solution {
public:
    int minSwaps(string s) {
     
//         int n = s.length();
//         int cntZero = 0 , cntOne = 0;
//         for(int i=0;i<n;++i)
//         {
//             if(s[i]=='1')
//                 cntOne++;
//             else
//                 cntZero++;
//         }
        
//         if(abs(cntOne - cntZero)>1)
//             return -1;
        
//         int cntSwaps = 0;
        
//         if(n%2)
//         {
        
//             if(cntOne > cntZero)
//             {
//                 int temp = 1;
//                 for(auto i:s)
//                 {
//                     if(i!=temp)
//                         cntSwaps++;
//                     temp = ~temp;
                        
//                 }
//             }
//             else
//             {
//                 int temp = 0;
//                 for(auto i:s)
//                 {
//                     if(i!=temp)
//                         cntSwaps++;
//                     temp = ~temp;
                        
//                 }
//             }
        
//         }//odd case
//         else
//         {
//            if(s[0]=='1')
//            {
//                 int temp = 1;
//                 for(auto i:s)
//                 {
//                     if(i!=temp)
//                         cntSwaps++;
//                     temp = ~temp;
//            }
//            }
//             else
//             {
//                 int temp = 0;
//                 for(auto i:s)
//                 {
//                     if(i!=temp)
//                         cntSwaps++;
//                     temp = ~temp;
                
//             }
      
//         }
//         }//even case
               
//               return (cntSwaps/2);
        // count the Number of 1s and 0s first . Check for -1 condition and the Make cases and find minimum no of swaps required , 101010.. or 0101... type main se ek hoga , make temp valid string and compare 
        
        int cnt0=0,cnt1=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='0')cnt0++;
            else cnt1++;
        }
        if(abs(cnt0-cnt1)>1) return -1;
        string s1="",s2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1+='0';
                s2+='1';
            }
            else{
                s1+='1';
                s2+='0';
            }
        }
        int c1=0,c2=0;
        if(cnt0==cnt1){
            for(int i=0;i<n;i++){
                if(s[i]!=s1[i]) c1++;
                if(s[i]!=s2[i]) c2++;
            }
            return min(c1/2, c2/2);
        }
        if(cnt1>cnt0) s1=s2;
        for(int i=0;i<n;i++)
            if(s[i]!=s1[i]) c1++;
        return c1/2;
        
    }
};