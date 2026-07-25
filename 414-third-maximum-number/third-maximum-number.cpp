class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> temp(nums.begin(), nums.end());
        int n = temp.size();
        if (n >= 3)
            return *next(temp.begin(),n - 3);
        else
            return *temp.rbegin();
    }
};
// *next(starting element,index) is itrator for set.