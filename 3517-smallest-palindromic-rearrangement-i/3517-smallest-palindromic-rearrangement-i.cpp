class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size()<=1){return s;}
        unordered_map<char,int> um;
        set<char> st;
        char mid ='\0';
        for(auto c : s){um[c]++;st.insert(c);}
        string half = "";
        for(auto c : st){
            if(um[c]%2!=0){
                mid = c;
            }
            half += string(um[c]/2,c);
        }
        string rev = half;
        reverse(rev.begin(),rev.end());
        string result = half;
        if(mid!='\0'){result += mid;}
        result += rev;
        return result;
    }
};