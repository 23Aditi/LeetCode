class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n & 1; // 1 if it is set and 0 if ut us bot set
        bool alt = true;
        while(n>0){
            n = n >> 1;
            if((n&1) != !prev){
                alt = false;break;
            }
            prev = n&1;
        }
        return alt;
    }
};