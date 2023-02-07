class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        // longest subarray with 2  distnict elements
        if(n<=2)
            return n;
        map<int, int>m;
        int i = 0 , j = 0 , ans = -1;
        while(j<n)
        {
            m[fruits[j]]++;
            
            // if(m.size() < 2)
            //     j++;
            if(m.size() <= 2)
            {
                ans = max(ans , j-i+1);
                j++;
            }
            else if(m.size() > 2)
            {
                while(m.size() > 2)
                {
                   if(m[fruits[i]] == 1)
                       m.erase(fruits[i]);
                    else
                        m[fruits[i]]--;
                    i++;
                    
                    } 
                
                j++;
            }
        }
        
        
        return ans;
    }
};