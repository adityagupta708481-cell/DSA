class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int start = 0;
        int end = (rows * cols) - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int row = mid / cols;
            int col = mid % cols;
            int midValue = matrix[row][col];
            if (midValue == target)return true;
            else if (midValue < target) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};