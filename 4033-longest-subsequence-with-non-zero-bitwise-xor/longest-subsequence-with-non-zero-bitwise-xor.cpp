class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int i = 0, j = 0, ps = 0;
        int max_index = 0;
        while (j < nums.size()) {
            ps ^= nums[j];
            while (i <= j && nums[i] == 0)
                i++;
            if (ps != 0) {
                max_index = max(max_index, j + 1);
            } else if (i <= j) {
                max_index = max(max_index, j);
            }
            j++;
        }
        return max_index;
    }
};