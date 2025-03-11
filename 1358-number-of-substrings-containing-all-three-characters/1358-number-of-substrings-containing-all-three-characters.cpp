class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ct = 0;
        for(int i = 0 ; i < n ; i++){
            string temp = "";
            int a = 0,b = 0 , c = 0;
            for(int j = i ; j < n ; j++){
                temp+=s[j];
                if(s[j]=='a'){a=1;}
                else if(s[j]=='b'){b=1;}
                else if(s[j]=='c'){c=1;}
                if(a && b && c){ct+=(n-j);break;}
            }
        }
        return ct;
    }
};