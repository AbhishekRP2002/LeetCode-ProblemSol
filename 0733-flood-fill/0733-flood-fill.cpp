class Solution {
public:
    void backtrack(vector<vector<int>>& image , int r , int col  ,  int c , int nc )
    {
       int n = image.size();
        int m = image[0].size();
        if(r<0 or r>n-1 or col<0 or col>m-1 or image[r][col] != c or image[r][col]==nc)
            return;
        image[r][col] = nc;
        backtrack(image , r+1 , col  , c , nc);
        backtrack(image , r-1 , col , c , nc);
        backtrack(image , r , col + 1, c , nc);
        backtrack(image , r , col-1 , c , nc);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int tempColor = image[sr][sc];
        backtrack(image ,sr , sc , tempColor , color);
        return image;
        
    }
};