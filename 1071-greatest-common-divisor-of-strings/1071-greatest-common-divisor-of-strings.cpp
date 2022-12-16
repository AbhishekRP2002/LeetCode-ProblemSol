class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans = "";
        int n = str1.length();
        int m = str2.length();
        if(str1 + str2 == str2 + str1)
        {
            ans = str1.substr(0 , gcd(n ,m));
        }
        return ans;
        
    }
};