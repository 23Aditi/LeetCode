class Solution {
public:
    int countOdds(int low, int high) {
        int ct = 0;
        if(low%2==0 && high%2==0){
            ct = (high-low)/2;
        }else{
            ct = (high-low)/2 +1;
        }
        return ct;
    }
};