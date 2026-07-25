class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> info(nums.begin(), nums.end());
        int n = info.size();
        if (n >= 3)
            return *next(info.begin(),n - 3);
        else
            return *info.rbegin();
    }
};
// *next(starting,index) is itrator for set.