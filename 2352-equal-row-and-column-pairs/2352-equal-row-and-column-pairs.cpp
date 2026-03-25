class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>,int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[grid[i]]++;
        }
        int ct = 0;
        for(int j = 0 ; j < n ; j++){
            vector<int> vec;
            for(int i = 0 ; i < n ; i++){
                vec.push_back(grid[i][j]);
            }
            ct += mp[vec];
        }
        return ct;
    }
};