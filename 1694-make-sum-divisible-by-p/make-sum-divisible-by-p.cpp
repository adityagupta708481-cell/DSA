class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long total = 0;
        for (int x : nums)
            total += x;
        int tg = total % p;
        if (tg == 0)
            return 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        int len = n;
        long long cur = 0;
        for (int i = 0; i < n; i++) {
            cur = (cur + nums[i]) % p;
            int target = (cur - tg + p) % p;
            if (mp.count(target)) {
                len = min(len, i - mp[target]);
            }
            mp[cur] = i;
        }
        return len == n ? -1 : len;
    }
};