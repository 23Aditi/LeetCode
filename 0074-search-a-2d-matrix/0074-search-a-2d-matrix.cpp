class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowNo = matrix.size();
        int columnNo = matrix[0].size();
       
    
        int start = 0;
        int end = rowNo*columnNo-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            int row = mid/columnNo;
            int col = mid%columnNo;
            if(matrix[row][col]==target){
                return true;
            }
            if(matrix[row][col]>target){ // 1 2 3 4 5 6
                end = mid-1;
            }else{
                start = mid + 1;
            }
        }
        return false;
    }
};