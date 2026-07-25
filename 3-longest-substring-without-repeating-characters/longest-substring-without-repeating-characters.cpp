class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0, count = 0;
        vector<char> temp;
        for (auto i : s) {
            if (ranges::contains(temp, i)) {
                auto it = find(temp.begin(), temp.end(), i);
                temp.erase(temp.begin(), it + 1);
            }
            temp.push_back(i);
            count = temp.size();
            maxi = max(maxi, count);
        }
        return maxi;
    }
};