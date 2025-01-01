class Solution {
public:
    string largestOddNumber(string num) {
        // if num = "324455569048" we need to find first odd char from the end
        // this gives us the largest substr as  "324455569"
        int n = num.size();
        string substr = "";
        int i;
        for(i = n-1 ; i >= 0 ; i-- ){
            if((num[i]-'0')%2!=0){  // find the first odd char from the end
                break;
            }
        }
        substr = num.substr(0,i+1); // This gives the required substring
        return substr;
    }
};