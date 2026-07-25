class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.length()) return s;
        string result = "";
        int n = s.length();
        int cycleSize = 2 * numRows - 2;
        for (int row = 0; row < numRows; row++) {
            for (int i = row; i < n; i += cycleSize) {
                result += s[i];
                int diagonalIdx = i + cycleSize - 2 * row;
                if (row != 0 && row != numRows - 1 && diagonalIdx < n) {
                    result += s[diagonalIdx];
                }
            }
        }
        return result;
    }
};