class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int len = 0;
        unordered_map<char,int> um;
        int j = 0;
        int maxlen = 0;
        for(int i = 0 ; i < n ; i++){
            um[s[i]]++;
            while(um[s[i]]>1){
                um[s[j]]--;
                j++;
            }
            len = (i-j+1);
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};