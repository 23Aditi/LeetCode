class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> um1;
        unordered_map<char,int> um2;
        if(word1.size()!=word2.size()) return false;
        for(int i = 0 ; i < word1.size(); i++){um1[word1[i]]++;}
        for(int i = 0 ; i < word2.size(); i++){um2[word2[i]]++;}
        vector<int> freq1, freq2;
        for(auto i : um1){
            if(um2.find(i.first)==um2.end()){
                // element absent 
                return false;
            }else{
                freq1.push_back(i.second);
            }
        }
        for(auto i : um2){
            if(um1.find(i.first)==um1.end()){
                return false;
            }else{
                freq2.push_back(i.second);
            }
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2;
    }
};