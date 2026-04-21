class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        vector<vector<int>> grid(n,vector<int>(m,0));
        // We sort so that when multiple colors reach a cell at the same time, the larger color wins or colors first.
        if(sources.size()<1) return grid;
        if(sources.size()==1){
            vector<vector<int>> ans(n,vector<int>(m,sources[0][2]));
            return ans; 
        }
        sort(sources.begin(),sources.end(),[](const vector<int>& a, const vector<int>& b){
            return a[2]>b[2];
        });
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(auto s : sources){
            ans[s[0]][s[1]]=s[2]; // it is gaurantted that sources are distinct and don't overlap
        }
        vector<int> dx = {0,0,1,-1};
        vector<int> dy = {1,-1,0,0};
        for(int i = 0 ; i < sources.size(); i++){
            vector<int> s = sources[i];
            int a = s[0], b = s[1], c = s[2];
            if(!ans[a][b]) ans[a][b]=c;
            for(int j = 0 ; j < 4 ; j++){
                int x = a + dx[j];
                int y = b + dy[j];
                if(x<n && x>=0 && y<m && y>=0 && ans[x][y]==0){
                    ans[x][y]=c;
                    sources.push_back({x,y,c});
                }
            }
        }
        return ans;
    }
};