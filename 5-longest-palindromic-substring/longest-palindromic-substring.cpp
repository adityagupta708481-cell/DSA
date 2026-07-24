class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1)
            return s;
        auto pal = [&](int l, int r) {
            while (l >= 0 && r < s.length() && s[l] == s[r]) {
                l--;
                r++;
            }
            return s.substr(l + 1, r - l - 1);
        };
        string maxi = s.substr(0, 1);
        for (int i = 0; i < s.length(); i++) {
            string odd = pal(i, i);
            string even = pal(i, i + 1);
            if (odd.length() > maxi.length())
                maxi = odd;
            if (even.length() > maxi.length())
                maxi = even;
        }
        return maxi;
    }
};