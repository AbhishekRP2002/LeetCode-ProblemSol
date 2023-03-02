class Solution {
public:
    int compress(vector<char>& chars) {
//         map<char,int>m;
//         for(auto it:chars)
//             m[it]++;
//         string s = "";
//         for(int i=0;i<chars.size();)
//         {
//             if(m[chars[i]]==1)
//             {
//                 s+=chars[i];
//                 i++;
//             }
//             else if(m[chars[i]]>1)
//             {
//                 string temp = to_string(m[chars[i]]);
//                 s+=chars[i];
//                 s+=temp;
//                 i+=m[chars[i]];
//             }
//         }
        
//         chars.clear();
//        for(auto i:s)
//            chars.push_back(i);
//         for(auto it:chars)
//             cout<<it<<"\n";
//         return s.size();
        
         string s;
        int ctr=1,i;
        for(i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1])
                ctr++;
            else if(chars[i]!=chars[i-1] && ctr==1)
                s+=chars[i-1];
            else{
                s+=chars[i-1];
                s+=to_string(ctr);
                ctr=1;
            }
        }
        if(ctr==1)
            s+=chars[i-1];
        else{
            s+=chars[i-1]+to_string(ctr);
        }
        for(int i=0;i<s.length();i++){
            chars[i]=s[i];
        }
      
        return s.length();
    }
};