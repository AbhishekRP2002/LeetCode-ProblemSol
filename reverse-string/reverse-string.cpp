#include<bits/stdc++.h>

class Solution {
public:
       void helper(int start,int end,vector<char> &s){
        if(start >= end ) //base case 
            return ;
        char temp = s[start]; //some calculations
        s[start] = s[end];
        s[end] = temp;
       helper(++start,--end,s); //subproblem
    }
    void reverseString(vector<char>& s) {
       
//         int n = s.size();
//         static int i = 0, j = n - 1;
//         if(n==0) return ;
        
      
        
//         if(i>=j) return ;
        
//         swap(s[i++] , s[j--]);
        
//         reverseString(s);
        
     
   
         helper(0,s.size() -1,s);
    }
    
};