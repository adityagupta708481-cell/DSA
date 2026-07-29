class Solution {
    int modPow(int base, int exp) {
        int res = 1;
        base %= 1337;
        for (int i = 0; i < exp; ++i) {
            res = (res * base) % 1337;
        }
        return res;
    }

public:
    int superPow(int a, vector<int>& b) {
        int result = 1;
        a %= 1337;
        
        for (int digit : b) {
            result = (modPow(result, 10) * modPow(a, digit)) % 1337;
        }
        
        return result;
    }
};