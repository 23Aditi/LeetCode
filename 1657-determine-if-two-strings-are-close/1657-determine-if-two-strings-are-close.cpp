class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26,0), freq2(26,0);
        for(auto x : word1){freq1[x-'a']++;}
        for(auto x : word2){freq2[x-'a']++;}
        for(int i = 0 ; i < 26 ; i++){
            if((freq1[i]==0 && freq2[i])||(freq2[i]==0 && freq1[i])){
                return false;
            }
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1 == freq2;
    }
};