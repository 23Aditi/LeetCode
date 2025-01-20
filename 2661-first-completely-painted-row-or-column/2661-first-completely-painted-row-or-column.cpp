class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,int> um_row; // unordered_map for row
        unordered_map<int,int> um_col; // unordered_mao for col
        unordered_map<int,pair<int,int>> index;
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                index[mat[i][j]]={i,j};
            }
        }
        for(int k = 0 ; k < arr.size() ; k++){
            int num = arr[k];
            auto& [i,j] = index[num];
            um_row[i]++; 
            um_col[j]++;
            if(um_row[i]==n || um_col[j]==m){
                return k;
            }
        }
        return -1;
    }
};