class Solution {
public:
    bool checkDistances(string s, vector<int>& dist) {
//        int n = s.length();
//         vector<vector<int>>diff(26 , vector<int>(2,-1));
        
//         for(int i=0;i<n;++i)
//         {
            
            
//             if(diff[s[i]-'a'][0]==-1)
//                 diff[s[i]-'a'][0] = i;
//             else 
//                 diff[s[i]-'a'][1] = i;
                
//         }
        
//         for(int i=0;i<diff.size();++i)
//         {
//             cout<<diff[i][0]<<" "<<diff[i][1]<<"\n";
//         }
        
//         vector<int>v(26,0);
        
//         for(int i=0;i<diff.size();++i)
//         {
          
//                v[i] = diff[i][1]-diff[i][0]-1;
//             if(v[i]==-1)
//                 v[i]=0;
//         }
        
//         for(auto i:v)
//             cout<<i<<" ";
        
//         if(v==dist)
//             return true;
//         return false;
        
                map<char, vector<int>> mp;

        for (int i = 0; i < s.size(); i++){
            mp[s[i]].push_back(i);
        }

        for (auto it : mp)
        {    
            if (it.second[1] - it.second[0] - 1 != dist[it.first - 'a']){
                return false;
            }
        }
        return true;
        
    }
};