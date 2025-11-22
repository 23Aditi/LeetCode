class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int j = 0;
        int maxFreq = 0;
        char c;
        int maxlen = 0;
        unordered_map<char,int> um;
        for(int i = 0 ; i < n ; i++){
            um[s[i]]++;
            if(maxFreq<um[s[i]]){
                maxFreq = um[s[i]];
                c = s[i];
            }
            while(i-j+1-maxFreq>k){
                um[s[j]]--;
                int maxi = 0;
                for(auto [k,v]:um){
                    maxi = max(maxi,v);
                }
                maxFreq=maxi;
                j++;
            }
            maxlen = max(maxlen,i-j+1);
        }
        return maxlen;
    }
};