class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
//         int n = temp.size();
//         stack< int >s;
//         vector< int >arr(n, 0);
//         int j = 1;
//         map< int , int >m;
//         for(int i=0;i<n;++i)
//         {
//             m[temp[i]] = i;
//         }
//         s.push(temp[0]);
//         int ctr =0;
//         while(j<n)
//         {
//             if(s.top() >= temp[j])
//                 s.push(temp[j++]);
//             else //incoming temp is greater than the temperatures in the stack
//             {
//                 int i = j;
//                 while((s.top() < temp[j]) and !s.empty())
//                 {
//                     ctr++;
//                     int x = s.top();
//                     s.pop();
//                     arr[m[x]] = ctr;
//                 }
//                 ctr = 0 ;
//                 s.push(temp[j]); 
//                 j++;
//             }
            
//         }
        
//         return arr;
        
        int n = arr.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--) {
			
			// Popping all indices with a lower or equal temperature than the current index
            while(!st.empty() && arr[i] >= arr[st.top()])
                st.pop();
				
			// If the stack still has elements, then the next warmer temperature exists!
            if(!st.empty())
                ans[i] = st.top() - i;
				
			// Inserting current index in the stack: monotonicity is maintained!
            st.push(i);
        }
        
        return ans;
        
        
    }
};