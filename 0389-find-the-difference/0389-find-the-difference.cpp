class Solution {
public:
    char findTheDifference(string s, string t) {
        int x = s[0];
        for(int i = 1 ; i < s.size();i++){
            int n = s[i];
            x=x^n;
        }
        for(int i = 0 ; i < t.size();i++){
            int n = t[i];
            x = x^n;
        }
        return (char)x;
    }
};