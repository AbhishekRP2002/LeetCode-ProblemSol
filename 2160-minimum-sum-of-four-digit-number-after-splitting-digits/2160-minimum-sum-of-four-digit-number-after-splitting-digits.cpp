class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        vector<int>v;
        for(auto i:s)
            v.push_back(i -'0');
        sort(v.begin() , v.end());
        string n1 = "" , n2="";
       
                n1+=to_string(v[0]);
                n1+=to_string(v[2]);
            
                n2+=to_string(v[1]);
                n2+=to_string(v[3]);

        
        int new1 = stoi(n1);
        int new2 = stoi(n2);
        return new1+new2;
    }
};