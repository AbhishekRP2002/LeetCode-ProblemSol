class Solution {
public:
    string decodeString(string s) {
        string ans = "" ;
        int n = s.length();
        int i = 0;
      ans = helper( s,i);
        return ans;
    }
    
     string helper( string s  , int& i) {
        int num=0;
        string word = "";
        for(;i<s.size(); i++) {
            char cur = s[i];
            if(cur == '[') {
                i++;
                string curStr = helper(s , i);
                for(;num>0;num--) word += curStr;
            } 
            else if (cur >= '0' && cur <='9') {
                num = num*10 + cur - '0';
            } 
            else if (cur == ']') {
                return word;
            } 
            else {   
                word += cur;
            }
        }
        return word;
    }
};