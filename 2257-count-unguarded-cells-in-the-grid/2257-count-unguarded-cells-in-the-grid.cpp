class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>> grid(m,vector<char>(n,'U')); // U stands for unguarded;
        for(auto& guard : guards){
            int x = guard[0];
            int y = guard[1];
            grid[x][y] = 'G'; // G stands for Guard
        }
        for(auto& wall : walls){
            int x = wall[0];
            int y = wall[1];
            grid[x][y] = 'W'; // W stands for Wall
        }
        
        for(auto& guard : guards){
            int x = guard[0];
            int y = guard[1];
            
            // North
            for(int i = x-1 ; i>=0 && grid[i][y] != 'W' && grid[i][y]!='G';i--){
                grid[i][y] = 'C';         
                }
            // South
            for(int i = x+1 ; i < m && grid[i][y] != 'W' && grid[i][y]!='G';i++){
                grid[i][y] = 'C';
            }
            // East
            for(int j = y+1 ; j < n && grid[x][j] != 'W' && grid[x][j]!='G';j++){
                grid[x][j] = 'C';
            }
            // West
            for(int j = y-1 ; j>=0 && grid[x][j] != 'W' && grid[x][j]!='G';j--){
                grid[x][j] = 'C';
            }
        }
        
        int unguarded = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j]=='U'){unguarded++;}
            }
        }
        return unguarded;
    }
};