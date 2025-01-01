class Solution {
public:
    string largestOddNumber(string num) {
        int maxNum = INT_MIN;
        int n = num.size();
        string substr = "";
        int i;
        for(i = n-1 ; i >= 0 ; i-- ){
            if((num[i]-'0')%2!=0){
                break;
            }
        }
        substr = num.substr(0,i+1);
        return substr;
    }
};