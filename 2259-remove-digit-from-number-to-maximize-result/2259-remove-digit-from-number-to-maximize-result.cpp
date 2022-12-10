class Solution {
public:
    string removeDigit(string s, char digit) {
//         vector<long long int>v;
//         int n = s.size();
//         for(int i= 0;i<n;++i)
//         {
//             if(s[i]==digit)
//             {
//                 string temp = s;
//                 temp.erase(temp.begin() + i);
//                 v.push_back(stol(temp , nullptr  , 10));
//             }
//         }
        
//         long long int maxm = *max_element(v.begin() , v.end());
//         return to_string(maxm);
        
        int  n = s.size();
        string ans = "";
        for(int i=0;i<n;++i)
        {
            if(s[i]==digit)
            {
                string temp  = s.substr(0 , i) + s.substr(i+1);
                ans = max(ans , temp);
            }
        }
        
        return ans;
    }
};