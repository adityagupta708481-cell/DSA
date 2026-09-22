class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int l = 0, r = nums.size() - 1, pos = nums.size() - 1;
        while (l <= r) {
            int ls = nums[l] * nums[l];
            int rs = nums[r] * nums[r];
            if (ls > rs) {
                ans[pos] = ls;
                l++;
            } else {
                ans[pos] = rs;
                r--;
            }
            pos--;
        }
        return ans;
    }
};