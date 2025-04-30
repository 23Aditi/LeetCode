class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MAX && divisor == 1) return INT_MAX;
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;
        if (dividend == INT_MAX && divisor == -1) return INT_MIN + 1;

        bool negative = (divisor < 0) ^ (dividend < 0);
        long long d = abs((long long)dividend);
        long long D = abs((long long)divisor);
        long long quotient = 0;

        for (int i = 31; i >= 0; --i) {
            if (d >= (D << i)) {
                d -= (D << i);
                quotient |= (1LL << i);
            }
        }

        return negative ? -quotient : quotient;
    }
};