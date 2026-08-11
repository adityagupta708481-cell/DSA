class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> info;
        for (auto i : nums) {
            info.insert(i);
        }
        int maxi = 0;
        int count = 0;
        for (auto i : info) {
            if (info.find(i - 1) == info.end()) {
                while (info.find(i) != info.end()) {
                    count++;
                    i += 1;
                }
            }
            maxi = max(maxi, count);
            count = 0;
        }
        return maxi;
    }
};