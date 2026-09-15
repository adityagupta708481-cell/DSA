class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (auto temp : s) {
            if (isalnum(temp)) {
                str.push_back(tolower(temp));
            }
        }
        int l = 0, r = str.size() - 1;
        while (l < r) {
            if (str[l] != str[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};