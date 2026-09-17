class Solution {
    double powHelper(double x, long long exp) {
        if (exp == 0) return 1.0;
        double half = powHelper(x, exp / 2);
        if (exp % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
public:
    double myPow(double x, int n) {
        long long exp = n;
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }
        return powHelper(x, exp);
    }
};