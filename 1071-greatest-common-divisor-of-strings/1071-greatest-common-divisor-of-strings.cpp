class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1){return "";}
        int len = gcd(str1.size(),str2.size());
        if(str1.size()>str2.size()) str1.substr(0,len);
        return str2.substr(0,len);
    }
};