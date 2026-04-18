class Solution {
    void bfs(vector<vector<int>>& isConnected, vector<int>& visited, int start){
        queue<int> q;
        q.push(start);
        visited[start]=1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            vector<int> adj = isConnected[top];
            for(int i = 0 ; i <adj.size(); i++){
                if(adj[i] && visited[i]==0){
                    visited[i]=1;
                    q.push(i);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ct=0;
        int n = isConnected.size();
        vector<int> visited(n,0);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0  ; j <n ; j++){
                if(isConnected[i][j] && !visited[i]){
                    bfs(isConnected,visited,i);
                    ct++;
                }
            }
        }
        return ct;
    }
};