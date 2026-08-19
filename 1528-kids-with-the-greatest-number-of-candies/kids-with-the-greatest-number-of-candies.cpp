class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        for (auto i : candies) {
            if (i > maxi)
                maxi = i;
        }
        vector<bool> ans;
        for (auto i : candies) {
            ans.push_back((i + extraCandies) >= maxi);
        }
        return ans;
    }
};