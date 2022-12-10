class Solution {
public:
    string removeKdigits(string num, int k) {
        stack< char >s;
        int n = num.size();
        
        
        for(auto i:num)
        {
           while(!s.empty() and s.top() > i and k>0 )
           {
               s.pop();
               k--;
           }
            
            if(!s.empty() or i!='0')
            {
                s.push(i);
            }
        }
        
        
        //edge cases 
        
        while(!s.empty() and k>0)
        {
           s.pop();
           k--;
        }
        if(s.empty()) return "0";
        
        //push back elements into the strng 
        
        while(!s.empty())
        {
            num[n-1] = s.top();
            s.pop();
            n--;
        }
        
        return num.substr(n);
    }
            
};