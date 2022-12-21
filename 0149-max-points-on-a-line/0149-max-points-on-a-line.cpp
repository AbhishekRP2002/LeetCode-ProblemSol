class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
//         map<float , int>m;
//         int n = points.size();
//         sort(points.begin() , points.end());
//         long long int dy = points[1][1] - points[0][1];
//         long long int dx = points[1][0] - points[0][0];
//         for(int i=0;i<n;++i)
//         {
//             for(int j = i+1;j<n;++j)
//             {
                
//                long long int tempx = points[j][0] - points[i][0];
//                 long long int tempy = points[j][1] - points[i][1];
//                 if(dy*1LL*tempx == dx*1LL*tempy)
//                 {
                    
//                 }
//             }
//         }
   
         int result = 0;
        for(int i=0; i<points.size();++i){
            unordered_map<long double,int> h;
            int same = 1;
            int localmax = 0;
            for(int j=i+1;j<points.size();++j){
                if(points[i][0] == points[j][0] && points[i][1]==points[j][1]){
                    same++;
                }
                else if(points[i][0]==points[j][0]){
                    h[INT_MAX]++;
                }
                else{
                    long double slope = (long double)(points[i][1] - points[j][1])/(long double)(points[i][0] - points[j][0]);
                    h[slope]++;
                }
            }
            for(auto i : h){
                localmax = max(localmax,i.second);
            }
            localmax +=same;
            result = max(result,localmax);
        }
        return result;
    }
};