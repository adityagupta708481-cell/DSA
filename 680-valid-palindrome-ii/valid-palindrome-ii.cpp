class Solution {
public:
    bool ispalindrom(string str, int l, int r) {
        while (l < r) {
            if (str[l] != str[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return ispalindrom(s, l + 1, r) || ispalindrom(s, l, r - 1);
            }
            l++;
            r--;
        }
        return true;
    }
};