class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4) {
        unordered_map<int, int> info;
        int count = 0;
        for (auto i : nums1) {
            for (auto j : nums2) {
                int temp = i + j;
                info[temp]++;
            }
        }
        for (auto l : nums3) {
            for (auto m : nums4) {
                int temp1 = 0 - (l + m);
                if (info.find(temp1) != info.end()) {
                    count += info[temp1];
                }
            }
        }
        return count;
    }
};