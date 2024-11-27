class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
      /*x   0   1   2   3   4
        0       1   1       1       // first create a matrix n give initial 
        1           1               // loop through it an give the quer matrix[qu[0]][qu[1]]=1
        2               1   1       //for each row. find the first n last 1 in each row n increment row no accordingly. count gives the ans.
        3                   1
        4
        */
        
        // Time Limit Exceeded
/*
        vector<vector<int>> adjMatrix(n,vector<int>(n,0)); //adjMAtrix of n X n
        for(int i = 0 ; i < n-1 ; i++){
            adjMatrix[i][i+1] = 1;      //intial connections
        }
        vector<int> pathLength;
        for(auto& row : queries){
            adjMatrix[row[0]][row[1]] = 1;
            
            vector<int> distance(n,-1);
            queue<int> q;
            q.push(0);
            distance[0] = 0;
            
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                
                for(int i = 0 ; i < n ; i++){
                    if(adjMatrix[curr][i] == 1 && distance[i] == -1){
                        distance[i] = distance[curr] + 1;
                        q.push(i);
                    }
                }
            }
            pathLength.push_back(distance[n-1]);
        }
            return pathLength;
            
            */
        vector<vector<int>> adjList(n);
        for(int i = 0 ; i < n -1  ; i++){
            adjList[i].push_back(i+1);
        }
        vector<int> pathLength;
        for(auto& row : queries){
            adjList[row[0]].push_back(row[1]);
            
            vector<int> distance(n,-1);
            queue<int> q;
            q.push(0);
            distance[0]  = 0;
            
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                
                for(int neighbor : adjList[curr]){
                    if(distance[neighbor]==-1){
                        distance[neighbor] = distance[curr] + 1;
                        q.push(neighbor);
                    }
                }
            }
            pathLength.push_back(distance[n-1]);
        }
        
        return pathLength;
    }
};