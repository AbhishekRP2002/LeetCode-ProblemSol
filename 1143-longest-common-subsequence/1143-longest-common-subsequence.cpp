class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
//         int l1 = text1.length();
//         int l2 = text2.length();
//         map<int ,int>m1;
//         map<int, int>m2;
//         for(auto i:text1)
//             m1[i-'a']++;
//         for(auto i:text2)
//             m2[i-'a']++;
        
//         int len = 0;
        
//         if(l1>l2) // subsequence from text2
//         {
//             for(auto i:text2)
//             {
//                 if(m1.count(i-'a'))
//                 {
//                     len++;
//                     m1[i-'a']--;
//                 }
//             }
            
//         }
//         else // subseq from  text1
//         {
//             for(auto i:text1)
//             {
//                 if(m2.count(i-'a'))
//                 {
//                     len++;
//                     m2[i-'a']--;
//                 }
//             }
//         }
        
//         return len;
        
         short m[1001][1001] = {};
    for (auto i = 0; i < a.size(); ++i)
        for (auto j = 0; j < b.size(); ++j)
            m[i + 1][j + 1] = a[i] == b[j] ? m[i][j] + 1 : max(m[i + 1][j], m[i][j + 1]);
    return m[a.size()][b.size()];
    
    }
};