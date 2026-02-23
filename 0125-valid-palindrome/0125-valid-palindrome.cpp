class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            if(isalpha(s[i])){
                s1+=tolower(s[i]);
            }
        }
        int n1 = s1.size();
        cout << s1 << endl;
        int i = 0 , j = n1-1;
        //if(n1==1)return false;
        while(i<j){
            if(s1[i]!=s1[j]) return false;
            i++; j--;
        }
        return true;
    }
};