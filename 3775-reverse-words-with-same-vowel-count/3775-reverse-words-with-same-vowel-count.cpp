class Solution {
public:
    string reverseWords(string s) {
        unordered_map<char,int> um ={
            {'a',1},
            {'e',1},
            {'i',1},
            {'o',1},
            {'u',1}
        };
        int first = 0;
        int n = s.size();
        int i = 0;
        while( i < n && s[i] != ' '){
            if(um.count(s[i])) first++;
            i++;
        }
        if(!first) return s;
        int start = i+1;
        int end = i+1;
        int ct = 0;
        while(i < n){
            if(s[i]==' '){
                if(ct==first){
                    reverse(s.begin()+start,s.begin()+i);
                }
                start = i+1;
                ct=0;
            }
            if(um.count(s[i]))ct++;
            i++;
        }
        if(ct==first){
            reverse(s.begin()+start,s.begin()+n);
        }
        return s;
    }
};