class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        // fixed window size k, sliding window
        int n = arr.size();
        int start = 0, end = 0;
        int ctr= 0;
        int avgSum = 0;
        while(end < n)
        {
            if(end-start+1 < k)
            {
                avgSum+=arr[end];
                end++;
            }
            else if(end-start+1 == k)
            {
                avgSum+=arr[end];
                if(avgSum/k >= threshold)
                    ctr++;
                avgSum-=arr[start];
                start++;
                end++;
            }
        }
        
        return ctr;
        
    }
};