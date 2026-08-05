class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> info;
        for (auto i : nums) {
            info.insert(i);
        }
        return info.size() != nums.size();
    }
};