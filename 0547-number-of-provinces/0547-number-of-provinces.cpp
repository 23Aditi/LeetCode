class Solution {
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int node){
        int n = isConnected[node].size();
        visited[node]=1;
        for(int i = 0 ; i < n ; i++){
            if(isConnected[node][i] && !visited[i]){
                dfs(isConnected,visited,i);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,0);
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                ct++;
                dfs(isConnected,visited,i);
            }
        }
        return ct;
    }
};