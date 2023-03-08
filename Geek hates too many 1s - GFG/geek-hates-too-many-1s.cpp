//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
  vector<int>binaryRep(int n)
  {
      vector<int>v;
      while(n>0)
      {
          v.push_back(n%2);
         // cout<<v.back()<<" ";
          n /= 2;
      }
     
      reverse(v.begin() , v.end());
      return v;
  }
  
  void flip(vector<int>& v)
  {
      int n = v.size();
      int i=0 , j=0;
      while(j  < n)
      {
        if(j-i+1<3)
        j++;
        else if( j-i+1 == 3)
        {
            int sum = v[i] + v[i+1] + v[i+2];
            if(sum == 3)
            {
                v[j]=0;
            }
            i++;
            j++;
        }
      }
      
    
  }
    int noConseBits(int n) {
        //find binary , then sliding window of size 3 , if 3 consecutive 1s , flip the right most, return as decimal num
       if(n<3)
       return n;
        vector<int>binary =  binaryRep(n);
       int num = 0;
        
        flip(binary);
        int m = binary.size();
        m-=1;
        for(auto i:binary)
        num+=(i<<m--);
        
        return num;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends