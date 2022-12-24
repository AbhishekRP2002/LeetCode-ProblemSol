class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // auto it = max_element(arr.begin(), arr.end());
        // int index = it - arr.begin();
        //     return index;
        int n = arr.size();
        int low  = 0 , high = n-1;
        while(high - low > 1)
        {
            int mid = low + (high - low)/2;
            cout<<mid<<"<--Mid val"<<"\n";
            if((arr[mid] > arr[mid-1]) and (arr[mid] > arr[mid+1]))
                return mid;
            else if(arr[mid] < arr[mid-1])
                high = mid-1;
            else low = mid;
        
        }
        cout<<low<<"low-----high"<<high<<"\n";
        
        if(arr[low] > arr[high])
            return low;
        return high;
    }
};