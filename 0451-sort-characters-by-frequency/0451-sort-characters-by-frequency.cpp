class Solution {
public:
    string frequencySort(string s) {
        //data address table use kar skte hain cuz sirf 26 letters hain 
//         int n = s.size();
//         vector<int>v(26 ,0);
//         for(int i= 0;i< n;++i)
//         {
//             v[s[i] - 'a']++;
            
//         }
        
//         string ans;
//         while(ans.size()!=n)
//         {
//             int ind = max_element(v.begin() , v.end()) - v.begin();
//            int m = *max_element(v.begin() , v.end());
            
//             for(int i= 0;i<m;++i)
//             {
//                 ans += (ind + 'a');
//             }
            
//             v[ind] = -1;
//         }
        
//         return ans;
       int n = s.length();
        vector<pair<int ,int>>vp(128 , {0,0});
       
        for(auto i : s){
            int ind = i-'0';
            vp[ind].first++;
        }
        
        for(int i=0; i<128; i++) vp[i].second = i;
        
        sort(vp.begin(), vp.end(), greater<pair<int,int>>());
        string ans = "";
        
        for(auto i : vp){
            int x = i.first;
            int c = i.second;
            while(x--){
                ans.push_back(c + '0');
            }
        }
        
        return ans;
        
    }
};