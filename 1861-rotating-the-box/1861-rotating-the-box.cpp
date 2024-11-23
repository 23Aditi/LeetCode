class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size() ;
        int n = box[0].size() ;
        vector<vector<char>> newBox(n , vector<char>(m , '.'));
        
        for(int i = 0 ; i < m ; i++){
            int emptypos = n-1;
            for(int j = n - 1 ; j > -1 ; j--) {
                if(box[i][j] == '*'){
                    newBox[j][m-1-i] ='*'; // stationary object
                    emptypos = j - 1; 
                    }else if(box[i][j] ==  '#'){
                    newBox[emptypos][m-1-i] = '#';
                    emptypos--;
                }


                }
        }
        
        return newBox;
    }
};