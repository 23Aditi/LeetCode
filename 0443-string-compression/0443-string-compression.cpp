class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int ct = 0;
        for(int i = 0 ; i < chars.size()-1; i++){
            if(chars[i]!=chars[i+1]){
                s+=chars[i];
                if(ct>0)s+=to_string(ct+1);
                ct=0;
            }else{
                ct++;
            }
        }
        s+=chars[chars.size()-1];
        if(ct>0){s+=to_string(ct+1);}
        for(int i = 0 ; i < s.size(); i++){chars[i]=s[i];}
        return s.size();
    }
};