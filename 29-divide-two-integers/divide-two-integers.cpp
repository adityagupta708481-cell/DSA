class Solution {
public:
    long long multiply(long long x, long long y) {
        long long res = 0;
        while (y > 0) {
            if (y & 1)
                res += x;
            y >>= 1;
            if (y > 0)
                x <<= 1;
        }
        return res;
    }

    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long low = 0, high = a;

        while (low <= high) {
            long long mid = low + ((high - low) >> 1); 
            long long ans = multiply(b, mid);      
            if (ans > a)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return (dividend < 0) == (divisor < 0) ? high : -high;
    }
};