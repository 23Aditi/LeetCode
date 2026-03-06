class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int l = 0 ;
        int check = 1;
        for(int r = 1 ; r<n ; r++){
            if(s[r]=='0') check = 0;
            if(s[r]=='1' && check ==0){return false;}
        }
        return true;
    }
};