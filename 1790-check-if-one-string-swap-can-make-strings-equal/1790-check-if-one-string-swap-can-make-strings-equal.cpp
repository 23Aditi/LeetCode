class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> vec;
        if(s1==s2){return true;}
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1!=n2){
            return false;
        }
        int ct = 0;
        for(int i = 0 ; i < n1 ; i++){
            if(ct>2){return false;}
            if(s1[i]!=s2[i]){
                ct++;
                vec.push_back(i);
            }
        }
        char c = s1[vec[0]];
        s1[vec[0]] = s1[vec[1]];
        s1[vec[1]] =c;
        return s1==s2;
    }
};