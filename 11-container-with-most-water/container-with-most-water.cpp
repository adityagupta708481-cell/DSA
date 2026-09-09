class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_water = 0;
        int l = 0, r = n - 1;
        while (l < r) {
            int h = min(height[l], height[r]);
            max_water = max(max_water, h * (r - l));
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return max_water;
    }
};