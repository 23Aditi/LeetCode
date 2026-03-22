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
        if(n1>i){
            for(int j = i ; j < n1 ; j++){res+=word1[j];}
        }
        if(n2>i){
            for(int j = i ; j < n2 ; j++){res+=word2[j];}
        }
        return res;
    }
};