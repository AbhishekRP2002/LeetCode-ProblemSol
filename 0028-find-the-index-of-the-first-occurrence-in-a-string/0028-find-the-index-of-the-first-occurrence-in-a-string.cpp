class Solution {
public:
    int strStr(string haystack, string needle) {
       //sliding window approach we can try
        //BF -> find all substrings and vector<pair<string,ind>> main storethe initial index , match and return the lowest ind
        
        int h_length = haystack.size() , n_length =  needle.size();
        if(h_length<n_length)
            return -1;
        if(needle==haystack)
            return 0;
        
        int i = 0, j = 0 , ans =INT_MAX;
        while(j<h_length)
        {
            if(j-i+1 < n_length)
                j++;
            else if( j-i+1 == n_length)
            {
                string s = haystack.substr(i , n_length );
                if(s==needle)
                {
                    // ans = min(ans , i);
                    // i++;
                    // j++;
                    return i;
                    
                }
                else
                {
                    i++;
                    j++;
                }
            }
        }
        
        return -1;
        
    }
};