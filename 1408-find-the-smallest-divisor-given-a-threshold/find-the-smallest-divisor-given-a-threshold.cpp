class Solution {
public:
    int sumD(vector<int> arr, int divisor) {
        int sum = 0;
        for (auto i : arr) {
            sum += ceil((double)i / (double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(),nums.end());//max fun for vector.
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumD(nums, mid) <= threshold) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};