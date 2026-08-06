class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = n;
        int temp = 1;
        while (i != 0) {
            temp *= i % 10;
            i /= 10;
        }
        if (temp % t == 0)
            return n;
        return smallestNumber(n+1,t);
    }
};