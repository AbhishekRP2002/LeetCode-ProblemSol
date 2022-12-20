class Solution {
public:
    void dfs(vector<vector<int>>& rooms  , int  ind , vector<bool>& visited)
    {
        visited[ind] = true;
        
        for(int i= 0;i<rooms[ind].size();++i)
        {
            if(!visited[rooms[ind][i]])
                dfs(rooms, rooms[ind][i] , visited);
        }
        
        return;
        
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         int n = rooms.size();
//         map<int, int>m;
        
    
//        for(int i=0;i<n;++i)
//        {
//            for(auto it:rooms[i])
//                m[it]++;
//        }
        
//         for(int i= 1;i<n;++i)
//         {
//            int cnt  = 0;
//             for(int j = 0;j<rooms[i].size() ;++j)
//             {
//                 if(rooms[i][j] == i)
//                     cnt++;
//             }
//             cout<<cnt<<"--->"<<m[i]<<"\n";
            
//             if(m[i] > cnt)
//                 continue;
//             else return false;
//         }

//         return true;
        // The above approach wont work for all test cases 
        //Use DFS

        int n = rooms.size();
        vector<bool>visited(n , false);
        dfs(rooms , 0 , visited);
        
        for(auto i:visited)
        {
            if(i == false)
                return false;
        }
        
        return true;
    
    
    }
};