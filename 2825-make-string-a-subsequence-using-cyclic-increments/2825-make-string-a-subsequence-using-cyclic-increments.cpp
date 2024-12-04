class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        if(str1.size()<str2.size()){return false;}
        int i = 0;  //ptr for str1
        int j = 0;  //ptr for str2
        int n = str1.size();    //size of str1
        int m = str2.size();    //size of str2
        while(i < n && j < m){
            int s1 = str1[i];
            int s2 = str2[j];
            if((s1-'a'+1)%26 + 'a' == s2 || s1 ==s2 ){i++ ; j++;}
            else{i++;}
        }
        if(j == m){return true;}
        return false;
    }
};