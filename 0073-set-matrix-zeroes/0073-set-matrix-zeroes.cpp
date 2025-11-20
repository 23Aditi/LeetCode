class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int first_row = 0,first_col=0; 
        for(int i = 0 ; i < m ; i++){
            if(!matrix[0][i]){first_row=1;}
        }
        for(int i = 0 ; i < n ; i++){
            if(!matrix[i][0]){first_col=1;}
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(!matrix[i][j]){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i = 1; i < n; i++){
            if(matrix[i][0] == 0){
                for(int j = 1; j < m; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero columns based on first row markers (skip first column)
        for(int j = 1; j < m; j++){
            if(matrix[0][j] == 0){
                for(int i = 1; i < n; i++){
                    matrix[i][j] = 0;
                }
            }
        }
        if(first_row){
            for(int i = 0 ; i < m ; i++){
                matrix[0][i]=0;
            }
        }
        if(first_col){
            for(int i = 0 ; i < n ; i++){
                matrix[i][0]=0;
            }
        }
    }
};