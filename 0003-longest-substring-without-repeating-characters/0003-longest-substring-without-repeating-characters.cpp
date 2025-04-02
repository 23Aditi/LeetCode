class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s==""){return 0;}
        int n = s.size();
        int max_len = INT_MIN;
        unordered_map<char,int> um;
        int i = 0 , j = 0;
        while(j < n){
            char c = s[j];
            um[c]++;
            if(um[c]>1){
                while(i<=j && um[c]>1){
                    um[s[i]]--;
                    i++;
                }
            }else{
                max_len = max(max_len,j-i+1);
            }
            j++;
        }
        return max_len == INT_MIN ? 1 : max_len;
    }
};