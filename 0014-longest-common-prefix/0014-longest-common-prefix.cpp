class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string min = *min_element(strs.begin() , strs.end());
        string max  = *max_element(strs.begin() , strs.end());
        
        int i=0;
        int j=0;
        while(i<min.size()&& min[i]==max[j])
        {
            i++;
            j++;
        }
        
        return min.substr(0,i);
    }
};