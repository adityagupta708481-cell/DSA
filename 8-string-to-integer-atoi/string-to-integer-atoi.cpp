class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long y = 0;
        bool start = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-' && !start) {
                sign = -1;
                start = true;
            } else if (s[i] == '+' && !start) {
                sign = 1;
                start = true;
            } else if (isdigit(s[i])) {
                start = true;
                y = y * 10 + (s[i] - '0');
                if (sign * y > INT_MAX)
                    return INT_MAX;
                if (sign * y < INT_MIN)
                    return INT_MIN;
            } else if (s[i] == ' '&&!start)
                continue;
            else
                break;
        }
        return sign * y;
    }
};