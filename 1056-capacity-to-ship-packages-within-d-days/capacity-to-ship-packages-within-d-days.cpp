class Solution {
public:
    int totaldays(vector<int> weight, int cap) {
        int d = 1, load = 0;
        for (int i = 0; i < weight.size(); i++) {
            if (weight[i] + load > cap) {
                d += 1;
                load = weight[i];
            } else
                load += weight[i];
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int var = totaldays(weights, mid);
            if (var <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};