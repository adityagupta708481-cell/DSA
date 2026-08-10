class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (c1 == 0 && el2 != nums[i]) {
                c1 = 1;
                el1 = nums[i];
            } else if (c2 == 0 && el1 != nums[i]) {
                c2 = 1;
                el2 = nums[i];
            } else if (nums[i] == el1)
                c1++;
            else if (nums[i] == el2)
                c2++;
            else {
                c1--, c2--;
            }
        }
        vector<int> ans;
        c1 = 0, c2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (el1 == nums[i])
                c1++;
            if (el2 == nums[i])
                c2++;
        }
        int mini = (int)(nums.size() / 3) + 1;
        if (c1 >= mini)
            ans.push_back(el1);
        if (c2 >= mini)
            ans.push_back(el2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};