class Solution {
    vector<int> dx={0,0,1,-1};
    vector<int> dy={1,-1,0,0};
    bool dfs(vector<vector<char>>& grid,vector<vector<bool>>& visited, int i , int j,
    int parenti , int parentj){
        visited[i][j]=1;
        int n = grid.size();
        int m = grid[0].size();
        for(int k = 0 ; k < 4 ; k++){
            int x = dx[k] + i;
            int y = dy[k] + j;
            if(x>=n || x<0 || y>=m || y<0 ){continue;}
            if(grid[x][y]!=grid[i][j]){continue;}
            if(!visited[x][y]){
                if(dfs(grid,visited,x,y,i,j)) return true;
            }else{
                if(x!=parenti && y!=parentj) return true;
            }
        }
        return false;
    }
public:
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,0));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visited[i][j]){
                    if(dfs(grid,visited,i,j,-1,-1))return 1;
                }
            }
        }
        return 0;
    }
};