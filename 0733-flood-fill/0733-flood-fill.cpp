class Solution {
    void dfs(vector<vector<int>>& image, int i, int j, int color){
        int n = image.size();
        int m = image[0].size();
        if(i<0 || i>=n || j<0 || j>=m|| image[i][j]==0 ||image[i][j]==color) return;
        image[i][j]=color;
        dfs(image,i+1,j,color);
        dfs(image,i-1,j,color);
        dfs(image,i,j+1,color);
        dfs(image,i,j-1,color);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color);
        return image;
    }
};