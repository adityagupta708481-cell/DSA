class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> info;
        info[0] = 1;
        int presum = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            presum += nums[i];
            int temp = ((presum % k) + k) % k;
            if (info.find(temp) != info.end())cnt+=info[temp];
            info[temp] += 1;
        }
        return cnt;
    }
};