class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int n1 = word1.size();
        int n2 = word2.size();
        int n = min(n1,n2);
        int i = 0;
        while(i<n){
            res+=word1[i];
            res+=word2[i];
            i++;
        }
        res += word1.substr(i);
        res += word2.substr(i);
        return res;
    }
};