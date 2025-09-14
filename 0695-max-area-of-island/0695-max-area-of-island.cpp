class Solution {
    void dfs(vector<vector<int>>& grid,int i , int j , vector<vector<int>>& visited,int& ct){
        int n = grid.size();
        int m = grid[0].size();

        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0 || visited[i][j]) return;
        visited[i][j]=1;
        ct++;
        dfs(grid,i+1,j,visited,ct);
        dfs(grid,i-1,j,visited,ct);
        dfs(grid,i,j+1,visited,ct);
        dfs(grid,i,j-1,visited,ct);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int maxCt = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    int ct = 0;
                    dfs(grid,i,j,visited,ct);
                    maxCt = max(ct,maxCt);
                }
            }
        }
        return maxCt;
    }
};