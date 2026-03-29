class Solution {
    void dfs(vector<vector<int>>& rooms, vector<int>& visited, int node){
        visited[node]=1;
        for(auto x : rooms[node]){
            if(!visited[x]){
                dfs(rooms,visited,x);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n,0);
        visited[0]=1;
        dfs(rooms,visited,0);
        int sum = accumulate(visited.begin(),visited.end(),0);
        cout << sum << endl;
        return sum==n?true:false;
    }
};