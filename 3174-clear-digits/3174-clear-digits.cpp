class Solution {
public:
    string clearDigits(string s) {
        /*
        s = cb34
            0123
            i = 2 
            remove 2
            cb4
            remove b
            c4
        */
        for(int i = 0 ; i < s.size();i++){
            if(isdigit(s[i])){
                s.erase(s.begin()+ i);
                s.erase(s.begin()+i-1);
                i = i - 2;
            }
        }
        return s;
    }
    // ab4cgf5dj
    // acgdj
};