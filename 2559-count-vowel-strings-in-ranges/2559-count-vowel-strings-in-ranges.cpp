class Solution {
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> goodWords(n,0);        
        vector<int> result(queries.size());
        for(int i = 0 ; i <n ; i++){
            string word = words[i];
            if(isVowel(word[0]) && isVowel(word[word.size()-1])){
                goodWords[i]=1;
            }else{
                goodWords[i]=0;
            }
        }
        vector<int> prefixSum(n+1 , 0);
        for(int i= 0 ; i < n ; i++){
            prefixSum[i+1] = prefixSum[i] + goodWords[i];
        }

        for(int i=0 ; i < queries.size(); i++){
            int left = queries[i][0];
            int right = queries[i][1];
                        
            result[i] = prefixSum[right+1]-prefixSum[left];
        }
        return result;
    }
};