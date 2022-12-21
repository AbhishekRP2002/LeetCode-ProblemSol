//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
 #define ll long long
 #define M 1000000007
class Solution{
public:
void Util(int n , vector<vector<ll>>& support)
{
    if(n==1)
    {
        support[n-1].push_back(1);
        return;
    }
 
    Util(n-1 , support);
    for(int i= 0;i<n;++i)
    {
        if(i==0 or i==n-1)
        support[n-1].push_back(1);
        else
       {
           ll t = support[n-2][i] + support[n-2][i-1] ;
           support[n-1].push_back(t%M);
       }
    }
    
    return;
    
    
    
    
}
    vector<ll> nthRowOfPascalTriangle(int n) {
       vector<ll>ans;
       vector<vector<ll>>support(n);
       Util(n , support);
       ans = support[n-1];
       return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends