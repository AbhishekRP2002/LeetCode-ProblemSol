class Solution {
  //  private:
        // int hammingDistance(int x, int y) {
//         int ctr=0;
//         int n= x^y;
//         while(n)
//         {
//             n = n&(n-1);
//             ctr++;
//         }
//     return ctr;
//     }
 public:

    
     int totalHammingDistance(vector<int>& nums) {
//         int sum =0;
//       for(int i=0;i<nums.size();++i)
//       {
//           for(int j=i+1;j<nums.size();++j)
//           {
//              int temp =  hammingDistance(nums[i], nums[j]) ;
//           sum = sum + temp;
//       }
   
//       }
//          return sum;
         int sum = 0;
         int n = nums.size();
         if(n<2)
             return 0;
         int cnt[2] = {0 ,0};
         for(int i = 0; i< 32;++i)
         {
             int setCnt = 0;
             for(int j=0;j<n;++j)
             {
                 if((nums[j]&1)==0)
                     setCnt++;
                 nums[j] = (nums[j]>>1);
                 
             }
             
             sum+=(setCnt*(n - setCnt));
         }
         
         return sum;
   
    }
};