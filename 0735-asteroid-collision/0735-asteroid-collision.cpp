class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n = ast.size();
        stack<int>s;
        vector<int>ans;
        // if(ast[0] > 0)
        //     st.push(ast[0]);
//         for(int i=1;i<n;++i)
//         {
//              int t = ast[i];          
//             if(1LL*t*st.top() < 0)
//             {
              
//                 while(!st.empty())
//                 {
//                     if(st.top() < abs(ast[i]))
//                         st.pop();
//                     else if( st.top() == abs(t))
//                     {
//                         st.pop();
//                         t = 0;
//                     }
//                     else
//                         break;
//                 }
                
//                 if(st.empty() and t < 0)
//                     st.push(ast[i]);
//             }
//             else
//             {
//                 st.push(ast[i]);
                
                
                
//             }
//         }
             for(int i = 0; i < n; i++) {
            if(ast[i] > 0 || s.empty()) {
                s.push(ast[i]);
            }
            else {
                while(!s.empty() and s.top() > 0 and s.top() < abs(ast[i])) {
                    s.pop();
                }
                if(!s.empty() and s.top() == abs(ast[i])) {
                    s.pop();
                }
                else {
                    if(s.empty() || s.top() < 0) {
                        s.push(ast[i]);
                    }
                }
            }
        }  
            while(!s.empty())
            {
                int temp = s.top();
                s.pop();
                ans.push_back(temp);
            }
        
        reverse(ans.begin() , ans.end());
            
            return ans;
        
    }
};