class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = 0;
        int count  = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o'){
                count++;
            }
            if(i>=k && (s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='u'||s[i-k]=='o')){
                count--;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};