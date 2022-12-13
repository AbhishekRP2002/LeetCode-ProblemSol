class Solution {
public:
//     long long int weightCapacity(vector<int>& nums , long long int weight)
//     {
//         long long int ans = 0 , temp = 1;
//         for(auto i:nums)
//         {
//             ans+=i;
//             if(ans>weight)
//             {
//                 temp++;
//                 ans = i;
//             }
//         }
        
//         return temp;
//     }
//     int shipWithinDays(vector<int>& arr, int days) {
//         long long int sumOfweights = accumulate(arr.begin() , arr.end() , 0);
//          long long int l = 1;
//         int maxm = *max_element(arr.begin() , arr.end());
//         long long int h = sumOfweights;
//         long long int mid = 0;
//         while(h-l > 1)
//         {
//              mid = l + (h-l)/2;
//             if(weightCapacity(arr, mid) <= days)
//                 h = mid;
//             else
//                 l = mid+1;
//         }
//         int ans = 0;
        
//         if(weightCapacity(arr ,l) < days)
//             ans = l;
//         else ans = h;
        
//         return ans;
    
    int countDays(vector<int>& ws, int tot_cap, int cur_cap = 0, int res = 1) {
  for (auto w : ws) {
    cur_cap += w;
    if (cur_cap > tot_cap) ++res, cur_cap = w;
  }
  return res;
}
int shipWithinDays(vector<int>& ws, int D) {
  auto r = accumulate(begin(ws), end(ws), 0);
  auto l = max(r / D, *max_element(begin(ws), end(ws)));
  while (l < r) {
    auto m = (l + r) / 2;
    if (countDays(ws, m) <= D) r = m;
    else l = m + 1;
  }
  return l;
}
    
};