class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        //unordered_map<char,int> um;
        int n = s.size();
        int flag = false;
        if(n==1 || k == 1){return true;}
        for(int i = 1 ; i < n ; i++){
            int ct = 0;
            while(s[i]==s[i-1]){
                ct++;
                i++;
            }
            if(ct == k-1){return true;}
        }
        return false;
    }
};