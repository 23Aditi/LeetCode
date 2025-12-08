class Solution {
    bool isPerfectSq(int n){
        double root = sqrt(n);
        return floor(root)==ceil(root);
    }
public:
    int countTriples(int n) {
        int ct = 0;
        for(int a = 1 ; a < n ; a++){
            for(int b = 1 ; b<n ; b++){
                int num = a*a + b*b;
                if(isPerfectSq(num) && sqrt(num)<=n){
                    ct++;
                }
            }
        }
        return ct;
    }
};