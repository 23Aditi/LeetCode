class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;  // Handle edge case of empty matrix

        int i = 0;
        int j = matrix[0].size()-1;
        while(i<matrix.size() && j>=0){
            if(matrix[i][j]==target){return true;}
            if(matrix[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};