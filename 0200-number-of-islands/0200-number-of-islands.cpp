class Solution {
    void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<int>>& visited){
        int m = grid.size();
        int n = grid[0].size();

        if( i<0 || j <0 || i>=m || j>=n || visited[i][j] || grid[i][j]=='0') return;
        visited[i][j]=1;

        dfs(grid,i+1,j,visited);
        dfs(grid,i-1,j,visited);
        dfs(grid,i,j+1,visited);
        dfs(grid,i,j-1,visited);

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> visited(grid.size(),vector<int>(grid[0].size(),0));
        int ct =0;
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size();j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(grid,i,j,visited);
                    ct++;
                }
            }
        }
        return ct;
    }
};