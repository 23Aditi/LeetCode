class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        unordered_map<char,int> um;
        unordered_set<char> us;
        for(int i = 0 ; i < n ; i++ ){
            um[s[i]]++;
            us.insert(s[i]);
        }
        int count = 0;
        for(auto ch : us){
            if(um[ch]!=0){
                count += um[ch]%2==0? 2 : 1;
                um[ch]=0;
            }
        }
        return count;
    }
};