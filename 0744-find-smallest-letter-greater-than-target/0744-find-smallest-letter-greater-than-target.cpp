class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char target) {
       //find the upper bound of the target
        int n = s.size();
//         vector<int>v(n);
//         int targ = target - 'a';
//         for(int i= 0;i<n;++i)
//         {
//             v[i] = s[i] -'a';
//         }
        
        int  high = n-1 , low = 0 ;
       
        while(high - low > 1)
        {
            int mid = low + (high - low)/2;
            if(target < s[mid])
                high = mid;
            else
                low = mid+1;
        }
        
        cout<<s[low]<<" "<<s[high]<<"\n";
        if(s[low] > target) return s[low];
       else if(s[high] > target) return s[high];
return s[0];        //     return s[low] + 'a';
        // return s[high] + 'a';
    }
};