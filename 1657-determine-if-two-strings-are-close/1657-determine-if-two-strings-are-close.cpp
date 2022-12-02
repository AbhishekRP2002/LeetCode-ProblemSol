class Solution {
public:
    bool closeStrings(string word1, string word2) {
       string temp1 = word1;
        string temp2 = word2;
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin() , temp2.end());
        
        map<int, int>m1;
        map<int, int>m2;
        vector<int>v1;
        vector<int>v2;
        set<char>s1;
        set<char>s2;
        for(auto i:word1)
            s1.insert(i);
        for(auto i:word2)
            s2.insert(i);
        for(auto i:word1)
            m1[i-'a']++;
        for(auto i:word2)
            m2[i-'a']++;
        
        for(auto i:m1)
            v1.push_back(i.second);
        for(auto i:m2)
            v2.push_back(i.second);
        sort(begin(v1) , end(v1));
        sort(begin(v2) , end(v2));
        
        if(temp1== temp2 or (v1 == v2 and s1==s2))
            return true;
        return false;
    }
};