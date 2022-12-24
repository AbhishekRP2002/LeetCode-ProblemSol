class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
//         int n = points.size();
//         sort(points.begin()  , points.end());
//         int ans  =0;
//         int i = 0 , j =n-1;
//         map<vector<vector<int>> , int>m;
//         for(auto i:points)
//             m[i]++;
//         while(i<j)
//         {
//             int medianX = (double)(points[i][0] + points[j][0])/2;
//             int medianY = (double)(points[i][1] + points[j][1])/2;
//             vector<vector<int>>temp(1);
//             temp = {medianX, medianY};
//             if(m.count(temp))
//                 ans+=2;
//             i++;
//             j--;
//         }
        
//         return ans;
        
      
//         int n = points.size();
//         int res = 0;
//         for(int i=0;i<n;++i)
//         {
//               unordered_map<long long int, int>m;
//             for(int j = 0 ;j < n;++i)
//             {
//                 if(i==j)
//                     continue;
//                 else
//                 {
//                      int distX = points[j][0] - points[i][0];
//                      int distY = points[j][1] - points[i][1];
//                     long long int dist = (distX*distX) + (distY*distY) ;
                   
                    
//                     m[dist]++;
//                 }
//             }
            
//             for(auto it:m)
//             {
//                 if(it.second > 1)
//                     res += (it.second)*(it.second-1);
//             }
//         }
        
//         return res;
        int result = 0;
        unordered_map<int, int> umap;
        for(int i=0; i<p.size() ; i++){
            for(int j=0 ; j<p.size() ; j++){
                int d = pow(p[j][1] - p[i][1], 2) + pow(p[j][0] - p[i][0], 2);
                result += 2 * umap[d]++;
            }
            umap.clear();
        }
        return result;
        
    }
};