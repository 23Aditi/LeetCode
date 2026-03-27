class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec(n+1,0);
        for(int i = 0 ; i <= n ; i++){
            vec[i]= __builtin_popcount(i);
        }
        return vec;
    }
};