class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        if(numRows<=0){return result;}
        
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            
            for(int j=1;j<i;j++){   //i=0 || i=1 this loop is not executed
                int sum = result[i-1][j-1]+result[i-1][j]; 
                row[j] = sum;
                row[i-j] = sum;
                if(j==(i/2)+1){break;}

            }
            
            result.push_back(row);
            
        }
        
        return result;
    }
};