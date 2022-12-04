class Solution {
public:
    bool halvesAreAlike(string s) {
      int ptr1  = 0;
        int ptr2 = s.length()/2;
        int ctr1 = 0 , ctr2 =0;
    while(ptr2<s.length())
    {
        if(s[ptr1]=='a' or s[ptr1]=='e' or s[ptr1] == 'o'  or s[ptr1]=='i' or s[ptr1]=='u' or s[ptr1] == 'A' or s[ptr1]=='E' or s[ptr1]=='I' or s[ptr1] == 'O' or s[ptr1] == 'U')
        {
           ctr1++; 
        } 
        if(s[ptr2]=='a' or s[ptr2]=='e' or s[ptr2] == 'o'  or s[ptr2]=='i' or s[ptr2]=='u' or s[ptr2] == 'A' or s[ptr2]=='E' or s[ptr2]=='I' or s[ptr2] == 'O' or s[ptr2] == 'U')
        {
           ctr2++; 
        } 
        ptr1++;
        ptr2++;
    }
        
        if(ctr1==ctr2)
            return true;
        return false;
    }
};