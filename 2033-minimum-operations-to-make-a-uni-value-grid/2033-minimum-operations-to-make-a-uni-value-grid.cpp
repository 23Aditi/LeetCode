class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        // TWO QUES TO ASK : 
        // Q1) What is a clear cut rejection case when i will return -1 
        // Answer : When the mod of elements of grid is not same then no matter how many operations we perform we cannot make them equal.
        // Q2) Which element should i convert them into as now i know i can make them eq
        // Answer : Sort it and choose median for minimum no of operations
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
        for(int i =  0 ; i < vec.size(); i++){
            opct1 += ((abs(vec[i]-target1))/x);
            opct2 += ((abs(vec[i]-target2))/x);
        }
        return min(opct1,opct2);
    }
};