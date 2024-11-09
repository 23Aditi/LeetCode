class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       /*
        //Approach 1 :
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
        */
        //Approach 2 :
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = i + 1  ; j < matrix.size() ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0 ; i < matrix.size() ; i++){
            reverse(matrix[i].begin() , matrix[i].end());  }
    }
};