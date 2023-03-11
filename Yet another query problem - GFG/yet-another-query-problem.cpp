//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        vector<int>ans;
    
        int n = A.size();
        int ind = 0;
        
        vector<int>suffix(N);
        map<int, int>m;
        for(int i=N-1; i>= 0 ; i--)
        {
            m[A[i]]++;
            suffix[i] = m[A[i]];
        }
        
        
        for(auto i:Q)
        {
            int l = i[0] , r = i[1] , k = i[2];
            int cnt =0;
            while(l<=r)
            {
                if(suffix[l]==k)
                cnt++;
                l++;
            }
            
            ans.push_back(cnt);
            
            
        }
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends