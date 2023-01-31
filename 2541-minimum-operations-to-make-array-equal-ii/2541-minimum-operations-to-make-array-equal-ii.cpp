class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        
         long long  inr = 0, dcr = 0;
        long long sum1 = accumulate(nums1.begin() , nums1.end() , 0LL);
        long long sum2 = accumulate(nums2.begin() , nums2.end() , 0LL);
        if(sum1!=sum2)
            return -1;
        else 
        {
            int n = nums1.size();
            int ctr = 0;
            
           
            for(int i=0;i<n;++i)
            {
                if(nums1[i]==nums2[i])
                {
                    ctr++;
                } 
            }
            
            if(ctr==n)
                return 0;
            
            if(k==0)
                return -1;
          
            for(int i=0;i<n;++i)
            {
                int diff = abs(nums2[i] - nums1[i]);
                if(diff % k)
                    return -1;
                if(nums2[i] > nums1[i])
                {
                    inr += diff/k;
                }
                else if(nums2[i] < nums1[i])
                {
                    dcr+=(diff)/k;
                }
            }
        }
        
        if(inr==0 and dcr==0)
            return -1;
        return (inr + dcr)/2;
        
        
     
        
    }
};