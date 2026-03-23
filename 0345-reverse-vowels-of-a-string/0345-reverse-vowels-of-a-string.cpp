class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(s[i]!='A'&& s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'
            && s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                i++; continue;
            }
            if(s[j]!='A'&& s[j]!='E' && s[j]!='I' && s[j]!='O' && s[j]!='U'
            && s[j]!='a'&& s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u'){
                j--; continue;
            }
            swap(s[i],s[j]); i++; j--;
        }
        return s;        
    }
};