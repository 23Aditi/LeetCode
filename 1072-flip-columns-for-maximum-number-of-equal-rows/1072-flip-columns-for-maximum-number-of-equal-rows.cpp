class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string,int> um;
        int maxRows = 0;
        for(auto row : matrix){
            string originalPattern = "";
            string complementPattern = "";
            for(auto cell: row){
                originalPattern += (cell == 0 ? '0' : '1');
                complementPattern += (cell == 0 ? '1' : '0');
            }
            string pattern = min(originalPattern , complementPattern);
            um[pattern]++;
            maxRows = max(maxRows,um[pattern]);
        }
        return maxRows;
    }
};