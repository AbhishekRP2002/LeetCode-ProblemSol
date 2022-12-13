class Solution {
public:
//     long long int totalTripsAtGivenTime(vector<int>& nums , int mid)
//     {
//         long long int ans = 0;
//         for(auto i:nums)
//         {
//             long long int temp = i;
//             ans += (mid/temp);
//         }
        
//         return ans;
        
//     }
//     long long minimumTime(vector<int>& time, int totalTrips) {
        
//         long long int n = time.size();
//         if(n==1)
//             return totalTrips*time[0];
//         long long int l = 1;
//         long long int h = 1e14;
//         while( h - l > 1)
//         {
//             long long int mid = l + (h-l)/2;
//             if(totalTripsAtGivenTime(time , mid) >= totalTrips)
//                 h = mid;
//             else
//                 l = mid+1;
//         }
//         long long  ans =0;
        
//         if(totalTripsAtGivenTime(time , l) >= totalTrips)
//             ans = l;
//         else
//             ans = h;
//         return ans  ;
        
//     }
    
    
     long long int numberOfTripsForGivenTime(vector<int>&a , long long int givenTime)
    {
        long long int totalTrips = 0;
        for(auto x : a)
        {
            // convert it to long long int 
            long long int val = x;
			
            totalTrips += (givenTime / val);
        }
        return totalTrips;
    }
    long long minimumTime(vector<int>& arr ,  int totalTrips) {
        long long int lowestTime = 1;
        long long int highestTime = 1e14;
        while(lowestTime<highestTime)
        {
            long long int mid = lowestTime + (highestTime-lowestTime)/2;
            
            if(numberOfTripsForGivenTime(arr , mid) >= totalTrips)
                highestTime = mid;
            else
                lowestTime = mid+1;
        }
        return lowestTime;
    }
};