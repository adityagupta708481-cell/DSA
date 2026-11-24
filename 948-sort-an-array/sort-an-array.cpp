class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> ans;
        int i = low, j = mid + 1;
        while (i <= mid && j <= high) {
            if (nums[i] >= nums[j]) {
                ans.push_back(nums[j]);
                j++;
            } else {
                ans.push_back(nums[i]);
                i++;
            }
        }
        while (i <= mid) {
            ans.push_back(nums[i]);
            i++;
        }
        while (j <= high) {
            ans.push_back(nums[j]);
            j++;
        }
        for (int k = 0; k < ans.size(); k++) {
            nums[low + k] = ans[k];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return;
        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};