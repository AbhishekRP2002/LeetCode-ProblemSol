class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      
//         int max = *max_element(arr.begin() ,  arr.end());
//         int n = arr.size();
//         vector<int>hash(max+k+1 , 0);
//         int ctr=0;
        
//         for(int i =0;i<n;++i)
//         {
//             hash[arr[i]]++;
//         }
        
//         for(int i = 0;i<hash.size();++i)
//         {
//             if(hash[i]==0)
//                 ctr++;
//             if((ctr)==k+1) return i;
//         }
        
//         return 0;
        
        int n = arr.size();
        int start = 0 , end = n-1;
        int res = 0;
        while(end - start > 1)
        {
            int mid  = start + (end - start)/2;
            if(arr[mid] - (mid+1) >= k)
            {
                end = mid;
            }
            else
            {
                start = mid+1;
            }
        }
        
        cout<<start<<" -- "<<end<<"\n";
        
         if(arr[start] - (start + 1) >= k)
             return start + k;
         else if(arr[end] - (end + 1) >= k)
            res = end + k;
        else
            res = end+1+k;
       
        
        return res;
    }
};