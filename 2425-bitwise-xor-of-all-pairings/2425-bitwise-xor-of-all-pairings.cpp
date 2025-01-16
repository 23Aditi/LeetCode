class Solution {
public:
    int xorAllNums(vector<int>& num1, vector<int>& num2) {
        int result = 0;
        if(num2.size()%2!=0){
            for(int i = 0 ; i < num1.size() ; i++){
                result = result^num1[i];
            }
        }
        if(num1.size()%2!=0){
            for(int i = 0 ; i < num2.size() ; i++){
                result = result^num2[i];
            }
        }
        return result;
    }
};