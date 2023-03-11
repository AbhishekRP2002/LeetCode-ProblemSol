//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // sort(arr , arr+n);
        // int duplicate = 0;
        // int *ans = new int[2];
        // for(int i=0;i<n-1;++i)
        // {
            
        //     if(arr[i] == arr[i+1])
        //     duplicate = arr[i];
        // }
            
        //     long long int sum = accumulate( arr , arr+ n , 0);
        //     long long int sum2n = n*(n+1)/2;
        //     sum -= duplicate;
        //     int second = sum2n - sum;
        //     ans[0]=( duplicate );
        //     ans[1]=(second);
        //     return ans;
        
        int *ans = new int[2];
        map<int , int>m;
        for(int i=0;i<n;++i)
        m[arr[i]]++;
        
        for(auto i:m)
        {
            if(i.second > 1)
            {
                ans[0] = i.first;
                break;
            }
        }
        
        
        for(int i=0;i<n;++i)
        {
            if(!m.count(i+1))
            ans[1] = i+1;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends