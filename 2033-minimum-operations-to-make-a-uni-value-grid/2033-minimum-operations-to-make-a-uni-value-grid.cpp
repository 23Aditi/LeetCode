class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n = grid.size();
        int m = grid[0].size();
        int opct1 = 0, opct2=0;
        vector<int> vec;
        //a -> a+x or a-x or a-2x or a+2x then (a+x)%x=a , (a+2x)%x=a,(a-2x)%x=a
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                vec.push_back(grid[i][j]); // flatten the grid
            }
        }
        sort(vec.begin(),vec.end());
        for(int i = 0 ; i < vec.size()-1 ; i++){
            if(vec[i]%x!=vec[i+1]%x){return -1;}
        }
        int target1 = vec[vec.size()/2];
        int target2 = vec[(vec.size()-1)/2];
        cout << target1 <<"    " << target2<< endl;
        for(int i =  0 ; i < vec.size(); i++){
            opct1 += ((abs(vec[i]-target1))/x);
            opct2 += ((abs(vec[i]-target2))/x);
        }
        return min(opct1,opct2);
    }
};