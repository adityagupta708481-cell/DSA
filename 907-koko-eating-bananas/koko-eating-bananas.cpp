class Solution {
public:
    int maxelement(vector<int> arr) {
        int maxi = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    long long totalhour(vector<int> arr, int hour) {
        long long total = 0;
        for (int i:arr) {
            total += (i+hour-1LL)/hour;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxelement(piles);
        int ans=high;
        while (low <= high) {
            int mid = (low + high) / 2;
            long long total = totalhour(piles, mid);
            if (total <= h){
                ans=mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};