class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        unordered_map<char,int> um;
        for(int i = 0 ; i < n ; i++){
            string word = words[i];
            for(int j = 0 ; j < (int)word.size(); j++){
                um[word[j]]++;
            }
        }
        for(auto [k,v]:um){
            if(v%n!=0){
                return false;
            }
        }
        return true;
    }
};