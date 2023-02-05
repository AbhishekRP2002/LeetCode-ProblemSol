class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
//         vector<int>ans;
//         int  i=0 , j=0;
//         int k = p.length();
//         map<char , int>m1;
//         for(auto i:p)
//             m1[i]++:
//         while(j< s.size())
//         {
//             if((j-i+1)<k)
//                 j++;
//             else if((j-i+1)==k)
//             {
//               map<char,int>m2;
//                 for(int ind = i;ind<=j;ind++)
//                 {
//                     m2[s[ind]]++;
//                 }
                   
//                 if(m1[s])
//                     ans.push_back(i);
//                 i++;
//                 j++;
//             }
//         }
//     return ans;
        
          int s_len = s.length();
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        //first window
        for(int i=0;i<p_len;i++){
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(freq_p == window) ans.push_back(0);
        
        for(int i=p_len;i<s_len;i++){
            window[s[i-p_len] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window) ans.push_back(i-p_len+1);
        }
        return ans;
    }
};