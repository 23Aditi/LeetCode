class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        string s = "";
        int n = sentence.size();
        for(int i = 0 ; i < n ; i++ ){
            if(sentence[i]==' '){
                words.push_back(s);
                s="";continue;
            }
            s+=sentence[i];
        }
        words.push_back(s); //for last word
        for(int i = 0;i < words.size() ; i++){
            string str = words[i];
            bool flag = true;
            for(int j = 0 ; j < searchWord.size();j++){
                if(searchWord[j]!=str[j]){flag = false;break;}
            }
            if(flag){return i+1;}
        }
        return -1;
    }
};