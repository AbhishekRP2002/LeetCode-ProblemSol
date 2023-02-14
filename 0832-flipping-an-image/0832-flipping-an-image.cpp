class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>>img;
        vector<int>v;
     
        for(int i=0;i<n;++i)
        {
            for(int k = n-1 ;k>=0 ; k--)
            {
                v.push_back(image[i][k]);
            }
            img.push_back(v);
            v.clear();
        }
        
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
                img[i][j] = (img[i][j]==0)?1:0;
        }
        
        return img;
    }
};