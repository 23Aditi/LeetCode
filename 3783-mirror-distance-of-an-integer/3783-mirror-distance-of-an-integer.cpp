class Solution {
    int reverse(int n){
        int num = n;
        int ans = 0;
        while(num){
            int r = num%10;
            num/=10;
            ans = ans*10 + r;
        }
        return ans;
    }
public:
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};