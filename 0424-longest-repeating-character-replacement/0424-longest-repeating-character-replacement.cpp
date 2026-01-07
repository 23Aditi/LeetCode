class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> vec(26,0);
        int n = s.size();
        if(k==0){
            int maxi = 1;
            int len = 1;
            for(int i = 0 ; i < n-1 ; i++){
                if(s[i]==s[i+1])len++;
                else len=1;
                maxi = max(maxi,len);
            }
            return maxi;
        }
        int maxFreq = 0;
        int j = 0;
        int maxlen = 0;
        char c = '.';
        for(int i = 0 ; i < n; i++){
            vec[s[i]-'A']++;
            if(vec[s[i]-'A']>maxFreq){
                maxFreq = vec[s[i]-'A'];
                c = s[i];
            }
            while(i-j+1 > maxFreq+k){
                vec[s[j]-'A']--;
                if(s[j]==c){maxFreq--;}
                j++;
            }
            maxlen = max(maxlen,i-j+1);
        }
        return maxlen;
    }
};