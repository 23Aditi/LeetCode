class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = t.size();
        int n1 = s.size();
        int i = 0;
        int j = 0;
        while(j<n){
            if(s[i]==t[j] && i < n1){i++;}
            j++;
        }
        if(i==n1 ){return true;}
        return false;
    }
};