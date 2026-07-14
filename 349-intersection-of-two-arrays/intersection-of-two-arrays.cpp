class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> check(1001, 0);

        for (int num : nums1)
            check[num] = 1;

        vector<int> ans;

        for (int num : nums2) {
            if (check[num]) {
                ans.push_back(num);
                check[num] = 0;
            }
        }

        return ans;
    }
};