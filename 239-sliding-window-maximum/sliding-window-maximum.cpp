class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int left = 0, right = left + k;
        multiset<int> s(nums.begin() + left,nums.begin() + right); 
        while (right <= nums.size()) {
            int maximum = *s.rbegin();
            ans.push_back(maximum);
            if (right < nums.size()) {
                s.erase(s.find(nums[left]));
                s.insert(nums[right]);
            }
            left++;
            right++;
        }
        return ans;
    }
};