class Solution {
public:
    int split(vector<int>& nums, int mid) {
        int cnt = 1;
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (total + nums[i] <= mid) {
                total += nums[i];
            } else {
                cnt += 1;
                total = nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        if (nums.size() < k)
            return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int split_sum = split(nums, mid);
            if (split_sum > k)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};