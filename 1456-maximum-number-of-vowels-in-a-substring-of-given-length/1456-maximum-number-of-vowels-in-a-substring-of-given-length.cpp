class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int> um = {
            {'a',1},
            {'e',1},
            {'i',1},
            {'o',1},
            {'u',1}
        };
        int n = s.size();
        int ct = 0;
        int ans = 0;
        for(int i = 0 ; i < k ; i++){
            if(um.find(s[i])!=um.end()){ct++;}
        }
        ans = ct;
        for(int i = k; i < n ; i++){
            if(um.find(s[i-k])!=um.end()){ct--;}
            if(um.find(s[i])!=um.end()){ct++;}
            ans = max(ans,ct);
        }
        return ans;
    }
};