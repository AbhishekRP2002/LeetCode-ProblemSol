class Solution {
public:
    // bool canEat(vector<int>& piles , int k , int h)
    // {
        
//       long long sum =0;
//         for(int i =0;i<piles.size();++i)
//         {
//            sum += ceil((float)piles[i]/k); 
//         }
//         cout<<"Sum:"<<sum<<"\n";
//         if(sum > h)return false;
//         else return true;
//     }
    int minEatingSpeed(vector<int>& piles, int h) {
       
//         int start = 1;
//         int end = *max_element(piles.begin(), piles.end());
//         int ans = -1 ;
        
//         while(start<=end)
//         {
//             int mid = start + (end - start)/2;
//             if(canEat(piles,mid ,h))
//             {
//                 ans = mid;
//                 end = mid-1;
//             }
//             else start = mid+1;
//         }
        
//         return ans;
      int low = 1,high = 1e9; // Range => [1,1e9]
        int ans ;
        while(low<=high)
        {
          int mid = (low+high)/2;
          long long time = 0;
          for(int i=0;i<piles.size();i++)
          {
              time += ceil((double)piles[i]/mid);
          }
          if(time>h)
          {
              low = mid+1;
          }
          else
          {
              ans = mid;
              high = mid-1;
          }
        }
     return ans;
}
   
};