class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        //using a min heap (smallest ele on top : comparator : greater<>)
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>> pq;
        // 0 : empty cell and 1 : obstacle
        vector<pair<int,int>> dist = {{0,1},{0,-1},{1,0},{-1,0}};
        
        // Distance Matrix
        vector<vector<int>> distance(m,vector<int>(n,INT_MAX));
        distance[0][0] = 0; //starting from 0
        
        pq.push({0,{0,0}}); //pushing the intial node
        
        vector<pair<int,int>> dir = {{0,1},{0,-1},{1,0},{-1,0}}; // N S E W : 4 directions
        
        while(!pq.empty()){
            auto [cost , cell] = pq.top();
            int x = cell.first , y = cell.second;
            pq.pop();
            
            if(y == n-1 && x == m-1){return cost;}
            
            for(auto [dx,dy] : dir){ //Neighbors
                int nx = x + dx, ny = y +dy;
                
                if(nx>=0 && nx<m && ny>=0 && ny<n){
                    int newcost = cost + grid[nx][ny];
                    if(newcost < distance[nx][ny]){
                        distance[nx][ny] = newcost;
                        pq.push({newcost,{nx,ny}});
                    }
                }
                
            }
        }
        
       return -1; 
    }
};