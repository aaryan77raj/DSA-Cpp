class Solution {
    public:
        double myPow(double x, int n) {
            long double ret = 1.0, pow_x = x;
            for (long m = n >= 0 ? (long)n : -1 * (long)n; m != 0; m >>= 1) {
                if (m & 1) ret *= pow_x;
                pow_x = pow_x * pow_x;
            }
        return n >= 0 ? ret : 1.0L / ret;
    }
};