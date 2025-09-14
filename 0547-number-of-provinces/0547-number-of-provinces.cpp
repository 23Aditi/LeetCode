class Solution {
    void dfs(vector<vector<int>>& isConnected,int start,vector<int>& visited){
        visited[start]=1;
        for(int i = 0 ; i < isConnected[0].size();i++){
            if(isConnected[start][i] && !visited[i]){
                dfs(isConnected,i,visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n,0);
        int ct=0;
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                ct++;
                dfs(isConnected,i,visited);
            }
        }
        return ct;
    }
};