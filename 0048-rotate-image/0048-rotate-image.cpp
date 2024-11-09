class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        unordered_map<int,vector<int>> um;
        int count = 0;
        for(auto& row : matrix){
            um[count] = row;
            count++;
        }
        int size = matrix.size()-1;
        for(int i = size ; i >= 0 ; i--){
            auto& row = um[i];
            for(int j = 0 ; j <= size ; j++){
                matrix[j][size-i] = row[j];
            } 
        }
    }
};